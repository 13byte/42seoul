/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:36:46 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/13 22:33:43 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*start_dest;

	start_dest = dest;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (start_dest);
}
