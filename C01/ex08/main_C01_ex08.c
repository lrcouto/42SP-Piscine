/* ************/Users/lcouto/C01/lcouto/ex08/main_C01_ex08.c************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex08.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:33:03 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/27 18:55:30 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int		main(void)
{
	int tab[18];
	int i;
	tab[0] = 0;
	tab[1] = -30;
	tab[2] = 16;
	tab[3] = -20;
	tab[4] = -14;
	tab[5] = 6;
	tab[6] = 8;
	tab[7] = 15;
	tab[8] = 70;
	tab[9] = 17;
	tab[10] = 12;
	tab[11] = 3;
	tab[12] = 5;
	tab[13] = 18;
	tab[14] = 9;
	tab[15] = 11;
	tab[16] = 13;
	tab[17] = 4;
	ft_sort_int_tab(tab, 18);
	i = 0;
	while (tab[i] < '0')
	{
		write(1, "-", 1);
		i = (tab[i] * -1);
		while (i < 18) 
		{
			ft_putnbr(tab[i]);
			write(1, "\n", 2);
			i++;
		}
	}
}
