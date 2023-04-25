/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:40:44 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/26 23:00:25 by junsjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	ft_str_print(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_line_check(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ' || *str == '\n')
	{
		if (*str != '\n')
			str = is_space(str);
		else
			str++;
	}
	while (*str >= '0' && *str <= '9')
		str++;
	str = is_space(str);
	if (*str == ':')
		str++;
	str = is_space(str);
	while (*str >= 33 && *str <= 126)
		str++;
	if (*str != '\n')
		return (0);
	return (str);
}

long long	ft_get_all_len(int fd)
{
	long long	all_len;
	char		tmp;

	all_len = 0;
	while (0 < read(fd, &tmp, 1))
		if (tmp != 26)
			all_len++;
	close(fd);
	return (all_len);
}

int	ft_dict_arr_check(char *arr, long long all_len)
{
	while (*arr)
	{
		arr = ft_line_check(arr);
		if (arr == 0)
		{
			return (1);
		}
		arr++;
	}
	return (0);
}

int	ft_check_dict(int *fd)
{
	long long	all_len;
	char		*arr;
	char		*temp;
	int			ret;

	ret = 0;
	all_len = ft_get_all_len(fd);
	arr = (char *)malloc(sizeof(char) * all_len + 1);
	temp = arr;
	if (0 < read(fd[1], arr, all_len))
	{
		arr[all_len] = '\0';
		while (*arr)
		{
			arr = ft_line_check(arr);
			if (arr == 0)
				ret = 1;
			arr++;
		}
	}
	else
		ret = 1;
	free(temp);
	return (ret);
}
