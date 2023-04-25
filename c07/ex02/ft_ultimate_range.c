/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:12:25 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/28 20:22:10 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*buff;

	index = -1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buff = (int *)malloc(sizeof(int) * (max - min));
	if (!buff)
		return (-1);
	while (++index < max - min)
		buff[index] = min + index;
	*range = buff;
	return (index);
}
