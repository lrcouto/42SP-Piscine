/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:56:26 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 09:02:26 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

char	**ft_matrix_alloc(char *p_map)
{
	int		ln;
	int		col;
	int		l;
	char	**char_matrix;

	l = 0;
	ln = ft_get_line(p_map);
	col = ft_get_col(p_map);
	char_matrix = malloc(sizeof(char*) * ln);
	while (l < ln)
	{
		char_matrix[l] = malloc(sizeof(char) * col);
		l++;
	}
	return (char_matrix);
}

void	ft_feed_matrix(char *p_map, char **char_matrix)
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
				char_matrix[l][c] = p_map[i];
			write(1, &char_matrix[l][c], 1);
			i++;
			c++;
		}
		i++;
		write(1, "\n", 1);
		l++;
	}
}
