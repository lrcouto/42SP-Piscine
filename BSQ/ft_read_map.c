/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:51:38 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 14:36:27 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

char	*ft_buffer(char source[])
{
	unsigned int	st_file;
	unsigned int	st_read;
	int				i;
	char			carac;
	char			*buf;

	i = 1;
	st_read = 1;
	st_file = open(source, O_RDONLY);
	while ((st_read = read(st_file, &carac, 1)) > 0)
		i++;
	close(st_file);
	st_file = open(source, O_RDONLY);
	buf = malloc(i);
	read(st_file, buf, i);
	buf[i] = '\0';
	return (buf);
}
