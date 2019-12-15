/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 03:46:07 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 16:13:59 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int		main(int argc, char **argv)
{
	char	*p_map;
	int		i;
	char	**char_matrix;
	int		**int_matrix;
	int		**search_matrix;
	i = argc;
	p_map = ft_buffer(argv[1]);
	char_matrix = ft_matrix_alloc(p_map);
	ft_feed_matrix(p_map, char_matrix);
	int_matrix = ft_int_matrix_alloc(p_map);
	ft_feed_int_matrix(p_map, int_matrix);
	search_matrix = ft_search_matrix_alloc(p_map);
	ft_search_square(search_matrix, int_matrix, p_map);
	free(char_matrix);
	free(int_matrix);
	free(search_matrix);
	return (0);
}
