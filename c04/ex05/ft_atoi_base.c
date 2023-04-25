/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:09:35 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/21 16:47:13 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_index(char str, int len, char *base)
{
	int	index;

	index = 0;
	while (index < len)
	{
		if (str == base[index])
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi(char *str, int len, char *base)
{
	int	num;
	int	sign;
	int	index;

	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		index = find_index(*str, len, base);
		if (index == -1)
			break ;
		num = num * len + index;
		str++;
	}
	return (num * sign);
}

int	check_invalid(char *str)
{
	int	i;

	while (*str)
	{
		i = 0;
		if (*str == '+' || *str == '-'
			||*str == ' ' || (*str >= 9 && *str <= 13))
			return (1);
		while (*(str + ++i))
		{
			if (*str == *(str + i))
				return (1);
		}
		str++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	len;

	len = 0;
	while (*(base + len))
		len++;
	if (!(*str) || len < 2 || check_invalid(base))
		return (0);
	nb = ft_atoi(str, len, base);
	return (nb);
}
