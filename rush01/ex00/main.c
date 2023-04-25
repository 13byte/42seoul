/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:10:13 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/19 21:56:42 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_print_str(char *str);
int		cnt_digit(char *str);
int		is_digit(char *str, char *row_col, int size);
void	_memset(char *str, int size);

int	main(int argc, char *argv[])
{
	char	*row_col;
	char	*row_map;
	char	*col_map;
	int		cnt;

	cnt = cnt_digit(argv[1]);
	row_col = (char *)malloc(sizeof(char *) * cnt);
	row_map = (char *)malloc(sizeof(char *) * (cnt / 2) / 2);
	col_map = (char *)malloc(sizeof(char *) * (cnt / 2) / 2);
	if (argc != 2 || is_digit(argv[1], row_col, cnt) || cnt % 2 == 1)
	{
		ft_print_str("Error\n");
		return (-1);
	}
	_memset(r_map, (cnt / 2) / 2);
	_memset(c_map, (cnt / 2) / 2);
	return (0);
}
