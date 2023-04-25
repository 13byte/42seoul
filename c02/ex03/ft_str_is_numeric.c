/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 00:18:27 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/17 01:15:36 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	check;

	check = 1;
	while (*str)
	{
		if (*str - '0' >= 0 && *str - '0' <= 9)
			check = 1;
		else
			return (0);
		str++;
	}
	return (check);
}
