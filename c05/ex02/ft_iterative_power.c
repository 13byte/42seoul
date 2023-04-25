/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:14:30 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/22 19:22:33 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0 || (power > 0 && nb == 0))
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
		nb *= num;
	return (nb);
}
