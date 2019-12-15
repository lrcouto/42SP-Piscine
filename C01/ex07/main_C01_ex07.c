/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex07.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:23:19 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/27 18:31:38 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb / 10) > 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int main(void)
{

	int a;
	a = 500;
	int tab[a];
	int i;

	i = 0;
	while (i < a) 
	{
		tab[i] = i;
		i++;
	}
	ft_rev_int_tab(tab, a);

	i = 0;
	while (i < a) 
	{
		ft_putnbr(tab[i]);
		write(1, "\n", 2);
		i++;
	}
}
