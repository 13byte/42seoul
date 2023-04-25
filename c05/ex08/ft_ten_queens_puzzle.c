/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 04:30:18 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/22 03:52:18 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int x, int chess[])
{
	int	i;
	int	tmp;

	i = 0;
	while (i < x)
	{
		tmp = chess[x] - chess[i];
		if (tmp < 0)
			tmp *= -1;
		if (chess[x] == chess[i] || x - i == tmp)
			return (0);
		i++;
	}
	return (1);
}

void	print_chess(int chess[])
{
	int		index;
	char	tmp;

	index = 0;
	while (index < 10)
	{
		tmp = chess[index] + 48;
		write(1, &tmp, 1);
		index++;
	}
	write(1, "\n", 1);
}

void	n_queen(int x, int *count, int chess[])
{
	int	i;

	i = 0;
	if (x == 10)
	{
		*count += 1;
		print_chess(chess);
		return ;
	}
	while (i < 10)
	{
		chess[x] = i;
		if (check(x, chess))
			n_queen(x + 1, count, chess);
			i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chess[10];
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (index < 10)
		chess[index++] = 0;
	n_queen(0, &count, chess);
	return (count);
}
