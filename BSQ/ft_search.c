/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 09:21:21 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 16:05:10 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"


int		**ft_search_matrix_alloc(char *p_map)
{
	int ln;
	int col;
	int l;
	int **search_matrix;

	l = 0;
	ln = ft_get_line(p_map);
	col = ft_get_col(p_map);
	search_matrix = malloc(sizeof(int*) * ln);
	while (l < ln)
	{
		search_matrix[l] = malloc(sizeof(int) * col);
		l++;
	}
	return (search_matrix);
}

void	ft_search_square(int **search_matrix, int **int_matrix, char *p_map)
{
	int c;
	int l;
	int ln;
	int col;

	ln = ft_get_line(p_map);
	col = ft_get_col(p_map);
	l = 0;
	while (l < ln)
	{
		c = 0;
		while (c < col)
		{
			if (int_matrix[l][c] > 0)
			{
				search_matrix[l][c] = ft_calculate_point(int_matrix, l, c);
				ft_putnbr(search_matrix[l][c]);
			}
			else
			{
				search_matrix[l][c] = 0;
				ft_putnbr(search_matrix[l][c]);
			}
			c++;
		}
		write(1, "\n", 1);
		l++;
	}
	write(1, "\n", 1);
}

/*int		ft_min_sort(int **int_matrix, int l, int c)
{
	int x;
	int y;
	int z;

	x = int_matrix[l][c - 1];
	ft_putnbr(x);
	y = int_matrix[l - 1][c];
	ft_putnbr(y);
	z = int_matrix[l - 1][c - 1];
	ft_putnbr(z);
	if (int_matrix[l][c] != 0)
	{
		if ((x < y) && (x < z))
			return (x + 1);
		else if ((y < x) && (y < z))
			return (y + 1);
		else if ((z < x) && (z < y))
			return (z + 1);
		else if ((x == y) && (y == z) && (x == z))
			return (x + 1);
	}
	return (0);
}*/

int		ft_calculate_point(int **int_matrix, int l, int c)
{
	int min;

	if (l == 0 || c == 0)
		return (1);
	min = int_matrix[l - 1][c];
	if (int_matrix[l][c - 1] < min)
		min = int_matrix[l][c - 1];
	if (int_matrix[l - 1][c - 1] < min)
		min = int_matrix[l - 1][c - 1];
	return (min + 1);
}

