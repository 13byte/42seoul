/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:30:47 by jeosong           #+#    #+#             */
/*   Updated: 2023/03/01 15:42:21 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_invalid(char *str);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}

int	ft_numlen(int nbr, int len)
{
	int	num_len;

	num_len = 0;
	while (nbr)
	{
		num_len++;
		nbr /= len;
	}
	return (num_len);
}

char	*convert_base(int nbr, char *base, int len, int sign)
{
	char	*str;
	int		num_len;
	int		i;

	num_len = ft_numlen(nbr, len);
	if (sign)
	{
		str = (char *)malloc(sizeof(char) * (num_len++ + 2));
		i = 1;
		str[0] = '-';
	}
	else
	{
		str = (char *)malloc(sizeof(char) * (num_len + 1));
		i = 0;
	}
	if (!str)
		return (0);
	str[num_len] = '\0';
	while (--num_len >= i)
	{
		str[num_len] = base[nbr % len];
		nbr /= len;
	}
	return (str);
}

char	*ft_itoa_base(int nbr, char *base)
{
	long long	nb;
	int			len;
	int			sign;
	char		*str;

	sign = 0;
	nb = nbr;
	len = ft_strlen(base);
	if (nb == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = base[0];
		str[1] = '\0';
		return (str);
	}
	if (nb < 0)
	{
		nb *= -1;
		sign = -1;
	}
	return (convert_base(nb, base, len, sign));
}
