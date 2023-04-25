/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 03:25:04 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/15 03:54:37 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*start_dest;

	start_dest = dest;
	while (*(dest))
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (start_dest);
}
