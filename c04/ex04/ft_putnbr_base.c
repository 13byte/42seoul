/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 04:04:11 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/21 16:45:46 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recv_print(long long nb, int len, char *base)
{
	if (nb / len > 0)
		ft_recv_print((nb / len), len, base);
	write(1, &base[nb % len], 1);
}

int	check_invalid(char *str)
{
	int	i;

	while (*str)
	{
		i = 0;
		if (*str == '+' || *str == '-')
			return (1);
		while (*(str + ++i))
		{
			if (*str == *(str + i))
				return (1);
		}
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb;
	int			len;

	nb = nbr;
	len = ft_strlen(base);
	if (len < 2 || check_invalid(base))
		return ;
	if (nb == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	ft_recv_print(nb, len, base);
}
