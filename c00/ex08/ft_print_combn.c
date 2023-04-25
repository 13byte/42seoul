/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 06:09:26 by jeosong           #+#    #+#             */
/*   Updated: 2023/03/02 20:51:53 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_depth(int depth, int n, int i, char *arr)
{
	if (depth == n)
	{
		write(1, arr, n);
		if (!(arr[0] == '9' + 1 - n))
			write(1, ", ", 2);
		return ;
	}
	while (i <= 9)
	{
		arr[depth] = i + '0';
		ft_print_combn_depth(depth + 1, n, i + 1, arr);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];
	int		depth;
	int		i;

	i = 0;
	depth = 0;
	ft_print_combn_depth(depth, n, i, &arr[depth]);
}
