/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 03:59:05 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/15 04:24:20 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start_dest;

	start_dest = dest;
	while (*dest)
		dest++;
	while (nb-- && *src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (start_dest);
}
