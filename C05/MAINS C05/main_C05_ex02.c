/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C05_ex02.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:17:53 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/09 21:54:03 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_power(int nb, int power);

int		main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int nb;
		int power;

		nb = atoi(argv[1]);
		power = atoi(argv[2]);
		printf("%d elevado a %d é %d.\n", nb, power, ft_iterative_power(nb, power));
		return (0);
	}
	else
	{
		printf("Este programa recebe dois números inteiros como argumentos.");
		return (0);
	}
}
