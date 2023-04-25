/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:51:32 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/19 16:01:33 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cnt_digit(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			cnt++;
			str++;
		}
		else
			str++;
	}
	return (cnt);
}

int	is_digit(char *str, char *row_col, int size)
{
	int	index;

	index = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (index < size)
				col[index] = *str;
			else
				row[index + size] = *str;
			index++;
			str++;
		}
		else if (*str == ' ')
			str++;
		else
			return (1);
	}
	return (0);
}

void	_memset(char *str, int size)
{
	while (size--)
		*(str++) = '0';
}
