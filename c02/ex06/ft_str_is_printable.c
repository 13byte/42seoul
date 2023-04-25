/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:56:06 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/19 00:53:48 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	check;

	check = 1;
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			check = 1;
		else
			return (0);
		str++;
	}
	return (check);
}
