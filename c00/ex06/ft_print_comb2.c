/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 08:32:18 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/15 23:09:45 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	one_num;
	int	two_num;

	one_num = -1;
	while (++one_num <= 98)
	{
		two_num = one_num;
		while (++two_num <= 99)
		{
			ft_print((char)(one_num / 10) + '0');
			ft_print((char)(one_num % 10) + '0');
			ft_print(' ');
			ft_print((char)(two_num / 10) + '0');
			ft_print((char)(two_num % 10) + '0');
			if (one_num != 98)
			{
				ft_print(',');
				ft_print(' ');
			}
		}
	}
}
