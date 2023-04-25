/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 02:37:32 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/14 22:37:35 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_multi(char digit1, char digit2, char digit3)
{
	write(1, &digit1, 1);
	write(1, &digit2, 1);
	write(1, &digit3, 1);
	if (!(digit1 == '7' && digit3 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				ft_print_multi(num[0], num[1], num[2]);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
