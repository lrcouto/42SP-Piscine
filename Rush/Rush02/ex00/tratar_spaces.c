/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tratar_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:56:27 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/08 18:50:40 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		isspace(char *str)
{
	if (*str == ' ')
		return (1);
	return (0);
}

void		ft_print_nospaces(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\n')
	{
		if (isspace && j == 0)
		{
			j = 1;
			write(1, " ", 1);
		}
		else if (!isspace)
		{
			write(1, str[i], 1);
			j = 0;
		}
		i++;
	}
}

