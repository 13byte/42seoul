/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:57:38 by jeosong           #+#    #+#             */
/*   Updated: 2023/03/01 03:59:08 by jeosong          ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	char	*start_dest;

	start_dest = dest;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (start_dest);
}

char	*ft_strcat(char *dest, char *src, char *sep)
{
	char	*start_dest;

	start_dest = dest;
	while (*(dest))
		dest++;
	while (*sep)
		*(dest++) = *(sep++);
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (start_dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		strs_size;
	int		sep_size;

	i = -1;
	strs_size = 0;
	if (!size)
	{
		str = (char *)malloc(sizeof(char) * 1);
		return (str);
	}
	while (i++ < size - 1)
		strs_size += ft_strlen(strs[i]);
	sep_size = ft_strlen(sep);
	i = 1;
	str = (char *)malloc(strs_size + ((size - 1) * sep_size) + 1);
	if (!(str))
		return (0);
	str = ft_strcpy(str, strs[0]);
	while (i < size)
		str = ft_strcat(str, *(strs + i++), sep);
	return (str);
}
