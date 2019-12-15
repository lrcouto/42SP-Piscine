/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:26:11 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/27 16:10:37 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int mrk;
	int numcounter;

	numcounter = 0;
	mrk = *str;
	while (mrk != 0)
	{
		str++;
		mrk = *str;
		numcounter++;
	}
	return (numcounter);
}
