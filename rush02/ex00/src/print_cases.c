/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsjung <junsjung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:55:39 by junsjung          #+#    #+#             */
/*   Updated: 2023/02/26 21:26:43 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	ft_retouch_n(unsigned int num, unsigned int *njko)
{
	unsigned int	temp;
	unsigned int	in[2];

	temp = num / 10;
	in[0] = 1;
	in[1] = 1;
	while (temp)
	{
		in[0]++;
		in[1] *= 10;
		temp /= 10;
	}
	if (njko[2] < in[0])
	{
		njko[2] = in[0];
		njko[0] = in[1];
	}
}

void	ft_print_str(int ac, char **av, unsigned int *key, char **val)
{
	unsigned int	m;
	unsigned int	temp;
	unsigned int	njko[4];

	if (ac == 3)
		m = ft_atoi(av[2]);
	else
		m = ft_atoi(av[1]);
	njko[0] = 1;
	njko[1] = 0;
	njko[2] = 1;
	njko[3] = 1;
	temp = m / 10;
	while (temp)
	{
		njko[2]++;
		njko[0] *= 10;
		temp /= 10;
	}
	if (m == 0)
	{
		while (val[0][njko[1]])
			write(1, &val[0][njko[1]++], 1);
	}
	br(key, val, njko, m);
}
