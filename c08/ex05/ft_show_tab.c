/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:08:32 by jeosong           #+#    #+#             */
/*   Updated: 2023/03/02 02:43:38 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_str_print(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_recv(int nb)
{
	if (nb == 0)
		return ;
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_str_print(par[i].str);
		ft_print('\n');
		ft_putnbr(par[i].size);
		ft_print('\n');
		ft_str_print(par[i].copy);
		ft_print('\n');
	}
}
