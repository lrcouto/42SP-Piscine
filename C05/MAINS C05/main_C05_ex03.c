/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C05_ex03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 10:50:22 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/10 11:39:03 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_power(int nb, int power);

int		main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int nb;
		int power;

		nb = atoi(argv[1]);
		power = atoi(argv[2]);
		printf("%d elevado a %d é %d.\n", nb, power, ft_recursive_power(nb, power));
		return (0);
	}
	else
	{
		printf("Este programa recebe dois números inteiros como argumentos.");
		return (0);
	}
}

