/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:30:31 by jeosong           #+#    #+#             */
/*   Updated: 2023/03/01 15:48:54 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa_base(int nbr, char *base);
int		ft_strlen(char *str);

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

int	check_invalid(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	if (len < 2)
		return (1);
	while (*str)
	{
		i = 0;
		if (*str == '+' || *str == '-'
			||*str == ' ' || (*str >= 9 && *str <= 13))
			return (1);
		while (*(str + ++i))
			if (*str == *(str + i))
				return (1);
		str++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	len;
	int	index;
	int	sign;

	nb = 0;
	sign = 1;
	len = ft_strlen(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13)
		|| *str == '+' || *str == '-')
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
		nb = nb * len + index;
		str++;
	}
	return (nb * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		num;

	if (check_invalid(base_from) || check_invalid(base_to))
		return ((void *)0);
	num = ft_atoi_base(nbr, base_from);
	str = ft_itoa_base(num, base_to);
	return (str);
}
