/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:41:38 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/15 22:20:25 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_str(char *cp_str, char *cp_find)
{
	while (*cp_str && *cp_find && *cp_str == *cp_find)
	{
		cp_str++;
		cp_find++;
	}
	return (*cp_find);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if (check_str(str, to_find) == 0)
			return (str);
		str++;
	}
	return (0);
}
