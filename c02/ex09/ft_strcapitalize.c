/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 02:08:21 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/15 19:13:21 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char	*str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*start_str;
	int		check;

	check = 0;
	start_str = str;
	ft_strlowcase(str);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z' && check == 0)
		{
			*str -= 32;
			check = 1;
		}
		else if (*str >= '0' && *str <= '9')
			check = 1;
		else if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
			check = 0;
		str++;
	}
	return (start_str);
}
