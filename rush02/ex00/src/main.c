/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsjung <junsjung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:38:16 by junsjung          #+#    #+#             */
/*   Updated: 2023/02/26 22:19:53 by junsjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_atoi(char *str)
{
	int	res;

	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*(str) == '-' || *(str - 1) == '+')
			return (-1);
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			res = (res * 10) + *(str++) - '0';
		else
			return (-1);
	}
	return (res);
}

int	ft_check_excep(int argc, char *argv[])
{
	int				det;
	long long		num;

	if (argc != 2 && argc != 3)
		det = -1;
	else
	{
		if (argc == 3)
			num = ft_atoi(argv[2]);
		else
			num = ft_atoi(argv[1]);
		if (num < 0)
			det = -1;
		else
			det = 0;
	}
	if (det < 0)
		write(1, "Error\n", 6);
	return (det);
}

void	ft_free(unsigned int *key_arr, char **val_arr, int line_num)
{
	int	i;

	i = 0;
	while (i < line_num)
	{
		free(val_arr[i]);
		i++;
	}
	free(val_arr);
	free(key_arr);
}

int	main(int argc, char *argv[])
{
	int				line_num;
	int				fd[3];
	unsigned int	*key_arr;
	char			**val_arr;

	if (ft_check_excep(argc, argv))
		return (0);
	if (ft_open_dict(argc, argv, fd, 3) || ft_check_dict(fd))
	{
		ft_str_print("Dict Error\n");
		return (-1);
	}
	line_num = ft_count_line();
	key_arr = (unsigned int *)malloc(sizeof(int) * line_num);
	val_arr = (char **)malloc(sizeof(char *) * line_num);
	ft_set_key(key_arr);
	fd[2] = 0;
	while (fd[2] < line_num)
		val_arr[fd[2]++] = (char *)malloc(sizeof(char) * 100);
	ft_set_str(val_arr);
	ft_print_str(argc, argv, key_arr, val_arr);
	write(1, "\n", 1);
	ft_free(key_arr, val_arr, line_num);
	return (0);
}
