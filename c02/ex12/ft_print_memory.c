/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 04:18:56 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/21 20:39:18 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int c, int flags)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (flags)
		write(1, &hex[c], 1);
	else
		write(1, &c, 1);
}

void	ft_hex_addr(unsigned long long hex_addr, int hex_digit)
{
	int	stk[16];
	int	cnt;

	cnt = -1;
	while (++cnt < hex_digit)
	{
		stk[cnt] = hex_addr % 16;
		hex_addr /= 16;
	}
	while (cnt--)
		ft_print(stk[cnt], 1);
	ft_print(':', 0);
	ft_print(' ', 0);
}

void	ft_hex_char(unsigned char *addr, int index)
{
	int	i;

	i = 0;
	while (i++ < 16)
	{
		if (i <= index)
		{
			ft_print(*addr / 16, 1);
			ft_print(*addr % 16, 1);
		}
		else
		{
			ft_print(' ', 0);
			ft_print(' ', 0);
		}
		if (i % 2 == 0)
			ft_print(' ', 0);
		addr++;
	}
}

void	ft_char(unsigned char *addr, int index)
{
	int	i;

	i = 0;
	while (i++ < index)
	{
		if (*addr >= ' ' && *addr <= '~')
			ft_print(*addr, 0);
		else
			ft_print('.', 0);
		addr++;
	}
	ft_print('\n', 0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	var;

	var = 0;
	if (size == 0)
		return (0);
	while (var < size)
	{
		ft_hex_addr((unsigned long long)addr, 16);
		if (size - var < 16)
			cnt = size - var;
		else
			cnt = 16;
		ft_hex_char(addr, cnt);
		ft_char(addr, cnt);
		addr += cnt;
		var += 16;
	}
	return (addr);
}
