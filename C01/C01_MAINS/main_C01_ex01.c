PaxHeader/main_C01_ex02.c                                                                           000644  777777  011610  00000000165 13567332715 016712  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893444
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144662
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_C01_ex02.c                                                                                     000644  5336260 011610  00000002152 13567332715 014736  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex02.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:52:53 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/26 20:31:25 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int coiso;
	int treco;

	coiso = 1;
	treco = 5;
	printf("%d,%d", coiso, treco);
	ft_swap(&coiso, &treco);
	printf("\n");
	printf("%d,%d", coiso, treco);
	return (0);
}
                                                                                                                                                                                                                                                                                                                                                                                                                      PaxHeader/main_C01_ex03.c                                                                           000644  777777  011610  00000000165 13567336475 016722  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893451
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144664
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_C01_ex03.c                                                                                     000644  5336260 011610  00000002132 13567336475 014744  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:41:26 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/26 21:03:09 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 150;
	b = 12;
	ft_div_mod(a, b, &div, &mod);
	printf("%d...%d", div, mod);
	return (0);
}
                                                                                                                                                                                                                                                                                                                                                                                                                                      PaxHeader/main_C01_ex04.c                                                                           000644  777777  011610  00000000165 13567341444 016713  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893459
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144665
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_C01_ex04.c                                                                                     000644  5336260 011610  00000002101 13567341444 014731  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex04.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 21:08:56 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/26 21:28:20 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 12;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("DIV = %d, MOD = %d", a, b);
	return (0);
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                               ./PaxHeader/._main_C01_ex05.c                                                                       000644  777777  011610  00000000200 13567521564 017257  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
30 ctime=1574893586.432071177
20 atime=1574893558
23 SCHILY.dev=16777220
22 SCHILY.ino=3351310
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                ./._main_C01_ex05.c                                                                                 000644  5336260 011610  00000000260 13567521564 015313  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                             Mac OS X            	   2   ~      �                                      ATTR       �   �                     �     com.apple.lastuseddate#PS    ��]    ���%                                                                                                                                                                                                                                                                                                                                                    PaxHeader/main_C01_ex05.c                                                                           000644  777777  011610  00000000165 13567521564 016717  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893464
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144667
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_C01_ex05.c                                                                                     000644  5336260 011610  00000001745 13567521564 014752  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex05.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 09:14:52 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/27 13:25:24 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(void)
{
	ft_putstr("Eu sou uma mensagem de teste");
	return (0);
}
                           PaxHeader/main_C01_ex06.c                                                                           000644  777777  011610  00000000165 13567545057 016723  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893469
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144668
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_C01_ex06.c                                                                                     000644  5336260 011610  00000002067 13567545057 014754  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex06.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:26:49 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/27 16:10:39 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	int result;

	result = ft_strlen("Adivinha quantos chars tem nessa string???");
	printf("%d\n", result);
	return (0);
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         PaxHeader/main_C01_ex07.c                                                                           000644  777777  011610  00000000165 13567565472 016727  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893475
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144670
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_C01_ex07.c                                                                                     000644  5336260 011610  00000002461 13567565472 014756  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
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
                                                                                                                                                                                                               PaxHeader/main_C01_ex08.c                                                                           000644  777777  011610  00000000165 13567570322 016716  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893479
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144671
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_C01_ex08.c                                                                                     000644  5336260 011610  00000003150 13567570322 014741  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
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
                                                                                                                                                                                                                                                                                                                                                                                                                        PaxHeader/main_c01_ex00.c                                                                           000644  777777  011610  00000000165 13567307700 016744  x                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         15 uid=1424560
20 ctime=1574893432
20 atime=1574893558
23 SCHILY.dev=16777224
21 SCHILY.ino=144658
18 SCHILY.nlink=1
                                                                                                                                                                                                                                                                                                                                                                                                           main_c01_ex00.c                                                                                     000644  5336260 011610  00000001756 13567307700 015001  0                                                                                                    ustar 00lcouto                          candidate                       000000  000000                                                                                                                                                                         /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c01_ex00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:40:23 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/26 17:49:04 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int a;

	a = 5;
	ft_ft(&a);
	printf("a = %d", a);
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  