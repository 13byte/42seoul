/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:38:19 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/13 19:57:56 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int row, int column);

int	_atoi(char str[])
{
	long long	num;
	int			i;

	num = 0;
	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		if (num > 2147483647)
			return (-1);
		i++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (-1);
	else
		rush(_atoi(argv[1]), _atoi(argv[2]));
	return (0);
}
