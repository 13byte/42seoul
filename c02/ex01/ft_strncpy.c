/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:34:28 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/19 05:37:11 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start_dest;
	unsigned int	i;

	i = 0;
	start_dest = dest;
	while (*src && (i < n))
	{
		*(dest++) = *(src++);
		i++;
	}
	while (i < n)
	{
		*(dest++) = '\0';
		i++;
	}
	return (start_dest);
}
