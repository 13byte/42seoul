/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:25:49 by jeosong           #+#    #+#             */
/*   Updated: 2023/03/01 19:09:15 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*start_dest;
	char	*str;
	int		len;

	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char *) * len + 1);
	start_dest = str;
	if (!str)
		return (0);
	while (*src)
		*(str++) = *(src++);
	*str = '\0';
	return (start_dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	stock_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock_str)
		return (0);
	i = -1;
	while (++i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = (av[i]);
		stock_str[i].copy = ft_strdup(av[i]);
	}
	stock_str[i].str = 0;
	return (stock_str);
}
