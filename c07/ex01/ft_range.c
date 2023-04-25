/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:45:43 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/28 20:19:15 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;

	index = 0;
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (0);
	while (min < max)
		range[index++] = min++;
	return (range);
}
