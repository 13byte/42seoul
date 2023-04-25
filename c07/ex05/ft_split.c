/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 22:07:59 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/28 20:20:28 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char *c, char *charset)
{
	while (*charset)
		if (*c == *(charset++))
			return (1);
	return (0);
}

char	*ft_malloc(char *start_point, char *end_point)
{
	char	*arr;
	char	*start_arr;

	arr = (char *)malloc(sizeof(char) * (end_point - start_point + 1));
	if (!arr)
		return (0);
	start_arr = arr;
	while (start_point != end_point)
		*(arr++) = *(start_point++);
	*(arr) = '\0';
	return (start_arr);
}

void	ft_strdup(char **matrix, char *str, char *charset)
{
	char	*start_point;
	int		flag;

	flag = 1;
	start_point = str;
	while (*str)
	{
		if (!(is_charset(str, charset)))
		{
			if (flag)
				start_point = str;
			flag = 0;
		}
		else
		{
			if (!flag)
				*matrix++ = ft_malloc(start_point, str);
			flag = 1;
		}
		str++;
	}
	if (!flag)
		*matrix = ft_malloc(start_point, str);
}

void	string_cnt(char *str, char *charset, int *len)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!(is_charset(str, charset)) && flag)
		{
			flag = 0;
			*len += 1;
		}
		if (is_charset(str, charset))
			flag = 1;
		str++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**matrix;
	int		len;

	len = 0;
	string_cnt(str, charset, &len);
	matrix = (char **)malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (0);
	ft_strdup(matrix, str, charset);
	matrix[len] = 0;
	return (matrix);
}
