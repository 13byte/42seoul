/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsjung <junsjung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:27:27 by junsjung          #+#    #+#             */
/*   Updated: 2023/02/26 23:03:59 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

char	*file_open_read(char *filename)
{
	long long	all_len;
	char		*buffer;
	int			fd;
	int			i;

	buffer = (char *)malloc(sizeof(char) * 3000);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		ft_str_print("Error\n");
	i = 0;
	while (i < 3000)
		buffer[i++] = '\0';
	read(fd, buffer, 3000);
	close(fd);
	return (buffer);
}

int	ft_count_line(char *filename)
{
	char	*buff;
	int		cnt;
	int		i;

	cnt = 0;
	buff = file_open_read(filename);
	i = 0;
	while (buff[i])
	{
		if (buff[i] == ':')
			cnt++;
		i++;
	}
	free(buff);
	return (cnt);
}

void	ft_set_key(unsigned int *key, char *filename)
{
	int		j;
	int		k;
	char	atoi_str[100];
	char	*buffer;
	char	*tmp;

	buffer = file_open_read(filename);
	tmp = buffer;
	k = 0;
	while (*buffer)
	{
		j = 0;
		while (*buffer != ':')
			atoi_str[j++] = *buffer++;
		atoi_str[j] = '\0';
		key[k++] = atoi(atoi_str);
		while (*buffer != '\n')
			buffer++;
		buffer++;
	}
	free(tmp);
}

int	is_alpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}

void	ft_set_str(char **val_arr, char *filename)
{
	int		j;
	int		k;
	char	*buf;
	char	*tmp;

	buf = file_open_read(filename);
	tmp = buf;
	k = 0;
	while (*buf)
	{
		j = 0;
		while (!is_alpha(*buf))
			buf++;
		while (*buf != '\n')
			val_arr[k][j++] = *buf++;
		val_arr[k++][j] = '\0';
		if (k > 40)
			break ;
	}
	free(tmp);
}
