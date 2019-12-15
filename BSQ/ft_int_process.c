/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 07:45:14 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 15:43:52 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int		**ft_int_matrix_alloc(char *p_map)
{
	int ln;
	int col;
	int l;
	int **int_matrix;

	l = 0;
	ln = ft_get_line(p_map);
	col = ft_get_col(p_map);
	int_matrix = malloc(sizeof(int*) * ln);
	while (l < ln)
	{
		int_matrix[l] = malloc(sizeof(int) * col);
		l++;
	}
	return (int_matrix);
}

void	ft_feed_int_matrix(char *p_map, int **int_matrix)
{
	int i;
	int l;
	int c;
	int ln;
	int col;

	ln = ft_get_line(p_map);
	col = ft_get_col(p_map);
	l = 0;
	i = 0;
	while (p_map[i] != '\n')
		i++;
	i++;
	while (l < ln)
	{
		c = 0;
		while (c < col)
		{
			if (p_map[i] != '\n')
			{
				if (p_map[i] == ft_get_empty(p_map))
					int_matrix[l][c] = 1;
				else if (p_map[i] == ft_get_obst(p_map))
					int_matrix[l][c] = 0;
			}
			ft_putnbr(int_matrix[l][c]);
			i++;
			c++;
		}
		i++;
		write(1, "\n", 1);
		l++;
	}
	write(1, "\n", 1);
}
