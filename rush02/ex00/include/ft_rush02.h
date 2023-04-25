/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:27:08 by jeosong           #+#    #+#             */
/*   Updated: 2023/02/26 22:15:13 by jeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char		*file_open_read(char *filename);
char		*ft_line_check(char *str);
char		*is_space(char *str);
long long	ft_get_all_len(int fd);
int			is_alpha(char ch);
int			ft_count_line(void);
int			ft_atoi(char *str);
int			ft_check_dict(int *fd);
int			ft_check_excep(int argc, char *argv[]);
int			ft_open_dict(int argc, char *argv[], int *fd, int fd_size);
int			ft_dict_arr_check(char *arr, long long all_len);
void		ft_str_print(char *str);
void		br(unsigned int *k, char **v, unsigned int *n, unsigned int m);
void		pr1(unsigned int *k, char **v, unsigned int m, unsigned int *n);
void		pr2(char **val, unsigned int m, unsigned int *njko);
void		pr3(unsigned int *key, char **val, unsigned int *njko);
void		pr4(unsigned int *key, char **val, unsigned int *njko);
void		pr5(unsigned int m, unsigned int *njko);
void		ft_retouch_n(unsigned int num, unsigned int *njko);
void		ft_print_str(int ac, char **av, unsigned int *key, char **val);
void		ft_set_key(unsigned int *key);
void		ft_set_str(char **val_arr);

#endif
