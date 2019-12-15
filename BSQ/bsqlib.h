/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:42:22 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 15:43:18 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> //NORMINETTE, ME LEMBRE DE RETIRAR!!

char	*ft_buffer(char source[]);

int		ft_get_line(char *p_map);

char	ft_get_empty(char *p_map);

char	ft_get_obst(char *p_map);

char	ft_get_full(char *p_map);

int		ft_get_col(char *p_map);

int		**ft_map_process(char *p_map);

void	ft_print_matrix(int **arr_int, char *p_map);

int		ft_strcmp(char *s1, char *s2);

void	ft_up_putnbr(unsigned int n);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

char	**ft_matrix_alloc(char *p_map);

void	ft_feed_matrix(char *p_map, char **char_matrix);

int		**ft_int_matrix_alloc(char *p_map);

void	ft_feed_int_matrix(char *p_map, int **int_matrix);

int		**ft_search_matrix_alloc(char *p_map);

void	ft_search_square(int **search_matrix, int **int_matrix, char *p_map);

int		ft_min_sort(int **int_matrix, int l, int c);

int		ft_calculate_point(int **int_matrix, int l, int c);

//void	ft_if_int(char *p_map, int **int_matrix);

#endif
