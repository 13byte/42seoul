/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:48:41 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/15 19:00:59 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			ft_print(*str);
		else
		{
			write(1, "\\", 1);
			ft_print(hex[((unsigned char)*str / 16)]);
			ft_print(hex[((unsigned char)*str % 16)]);
		}
		str++;
	}
}
