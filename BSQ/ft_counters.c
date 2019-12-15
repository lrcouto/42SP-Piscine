/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:47:00 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 05:16:43 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int		ft_get_line(char *p_map)
{
	int ln;
	int i;

	i = 0;
	ln = 0;
	while (p_map[i] != '\n')
		i++;
	while (p_map[i + 1] != '\0')
	{
		if (p_map[i] == '\n')
			ln++;
		i++;
	}
	return (ln);
}

char	ft_get_empty(char *p_map)
{
	int		i;
	char	empty;

	i = 0;
	while (p_map[i] != '\n')
		i++;
	empty = p_map[i - 3];
	return (empty);
}

char	ft_get_obst(char *p_map)
{
	int		i;
	char	obst;

	i = 0;
	while (p_map[i] != '\n')
		i++;
	obst = p_map[i - 2];
	return (obst);
}

char	ft_get_full(char *p_map)
{
	int		i;
	char	full;

	i = 0;
	while (p_map[i] != '\n')
		i++;
	full = p_map[i - 1];
	return (full);
}

int		ft_get_col(char *p_map)
{
	int i;
	int col;

	i = 0;
	col = 0;
	while (p_map[i] != '\n')
		i++;
	while (p_map[i + 1] != '\n')
	{
		i++;
		col++;
	}
	return (col);
}
