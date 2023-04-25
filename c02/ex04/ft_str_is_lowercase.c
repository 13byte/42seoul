/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 00:35:39 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/14 00:36:33 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check;

	check = 1;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			check = 1;
		else
			return (0);
		str++;
	}
	return (check);
}
