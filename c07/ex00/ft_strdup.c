/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:12:15 by jeosong           #+#    #+#             */
/*   Updated: 2023/03/01 23:47:42 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
