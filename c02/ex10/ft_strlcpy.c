/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:41:54 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/16 19:56:55 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (*(src + len))
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*start_dest;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	if (size)
	{
		i = 0;
		start_dest = dest;
		while ((i++ < size - 1) && *src)
			*(dest++) = *(src++);
		*dest = '\0';
	}
	return (len);
}
