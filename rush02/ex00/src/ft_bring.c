/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bring.c                                    	    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsjung <junsjung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:55:39 by junsjung          #+#    #+#             */
/*   Updated: 2023/02/26 22:14:52 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	br(unsigned int *key, char **val, unsigned int *njko, unsigned int m)
{
	while (m != 0 && njko[2] != 0)
	{
		njko[1] = 0;
		if (njko[2] % 3 == 2)
		{
			pr1(key, val, m, njko);
			write(1, " ", 1);
		}
		else if (m / njko[0] != 0)
			pr2(val, m, njko);
		if (njko[2] % 3 == 0 && m / njko[0] != 0)
			pr3(key, val, njko);
		else if (njko[2] != 1 && njko[2] % 3 == 1)
			pr4(key, val, njko);
		if (njko[0] != 1 && m % njko[0] == m % (njko[0] - 1))
			pr5(m, njko);
		else
		{
			njko[2]--;
			m %= njko[0];
			njko[0] /= 10;
		}
		ft_retouch_n(m, njko);
	}
}

int	ft_open_dict(int argc, char *argv[], int *fd, int fd_size)
{
	int	i;

	i = 0;
	if (argc == 2)
		while (i < fd_size)
			fd[i++] = open("./numbers.dict", O_RDONLY);
	else
	{
		i = 0;
		while (i < fd_size)
			fd[i++] = open(argv[2], O_RDONLY);
	}
	if (!(argc == 2 || argc == 3) || fd[0] <= 0)
		return (1);
	return (0);
}

char	*is_space(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	return (str);
}
