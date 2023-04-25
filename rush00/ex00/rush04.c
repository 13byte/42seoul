/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:51:16 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/12 18:32:46 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_conditional(int r, int c, int row, int column)
{
	if (c == 1 && r == 1)
		ft_putchar('A');
	else if (c == 1 && r == row)
		ft_putchar('C');
	else if (c == column && r == 1)
		ft_putchar('C');
	else if (c == column && r == row)
		ft_putchar('A');
	else if ((c > 1 && c < column) && (r == 1 || r == row))
		ft_putchar('B');
	else if (c == 1 || c == column)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int row, int column)
{
	int	r;
	int	c;

	if (row <= 0 || column <= 0)
		return ;
	c = 1;
	while (c <= column)
	{
		r = 1;
		while (r <= row)
		{
			rush_conditional(r, c, row, column);
			r++;
		}
		ft_putchar('\n');
		c++;
	}
}
