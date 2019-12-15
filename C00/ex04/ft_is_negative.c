/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:00:33 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/24 14:13:27 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char indicador;

	if (n >= 0)
	{
		indicador = 'P';
	}
	else if (n < 0)
	{
		indicador = 'N';
	}
	write(1, &indicador, 1);
}
