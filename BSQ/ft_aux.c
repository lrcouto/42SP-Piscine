/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 03:24:51 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/11 08:35:48 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != 0) && (*s2 != 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
		ft_putchar('-');
	n = nb;
	ft_up_putnbr(n);
}

void	ft_up_putnbr(unsigned int n)
{
	char un;

	if (n / 10 > 0)
		ft_up_putnbr(n / 10);
	un = n % 10 + '0';
	ft_putchar(un);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
