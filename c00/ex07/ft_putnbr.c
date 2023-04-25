/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:51:21 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/17 01:12:43 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_recv(int nb)
{
	if (nb == 0)
		return ;
	if (nb < 0)
	{
		nb = ~(nb) + 1;
		ft_print('-');
	}
	if (nb == -2147483648)
	{
		ft_print('2');
		nb = 147483648;
	}
	ft_recv(nb / 10);
	ft_print(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_print('0');
		return ;
	}
	ft_recv(nb);
}
