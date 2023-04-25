/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsjung <junsjung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:54:20 by junsjung          #+#    #+#             */
/*   Updated: 2023/02/26 21:24:54 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	pr1(unsigned int *key, char **val, unsigned int m, unsigned int *njko)
{
	int	i;

	i = 0;
	if (m / (njko[0] / 10) != 0 && m / njko[0] == 1)
	{
		while (key[njko[1]] != 10 + ((m % njko[0]) / (njko[0] / 10)))
			njko[1]++;
		while (val[njko[1]][i])
			write(1, &val[njko[1]][i++], 1);
		njko[2]--;
		m %= njko[0];
		njko[0] /= 10;
	}
	else
	{
		if (m / njko[0] != 0)
		{
			while (key[njko[1]] != (m / njko[0]) * 10)
				njko[1]++;
			while (val[njko[1]][i])
				write(1, &val[njko[1]][i++], 1);
		}
		if ((m % njko[0]) / (njko[0] / 10) == 0)
			njko[2]--;
	}
}

void	pr2(char **val, unsigned int m, unsigned int *njko)
{
	int	i;

	i = 0;
	while (val[m / njko[0]][i])
		write(1, &val[m / njko[0]][i++], 1);
	write(1, " ", 1);
}

void	pr3(unsigned int *key,
char **val, unsigned int *njko)
{
	int	i;

	i = 0;
	while (key[njko[1]] != 100)
		njko[1]++;
	while (val[njko[1]][i])
		write(1, &val[njko[1]][i++], 1);
	write(1, " ", 1);
}

void	pr4(unsigned int *key,
char **val, unsigned int *njko)
{
	int	i;

	i = 0;
	njko[3] = 1;
	while (njko[1]++ < (njko[2] / 3))
		njko[3] *= 1000;
	njko[1] = 0;
	while (key[njko[1]] != njko[3])
		njko[1]++;
	while (val[njko[1]][i])
		write(1, &val[njko[1]][i++], 1);
	write(1, " ", 1);
}

void	pr5(unsigned int m, unsigned int *njko)
{
	int	i;

	i = 0;
	while (njko[0] != 1 && m % njko[0] == m % (njko[0] - (1 + i)))
	{
			njko[2]--;
			njko[0] /= 10;
			i++;
	}
	m %= (njko[0] * 10);
}
