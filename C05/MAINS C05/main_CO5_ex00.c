/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_CO5_ex00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 12:56:05 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/12 14:50:25 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int nb;

		nb = atoi(argv[1]);
		printf("Fatorial de %d é %d\n", nb, ft_iterative_factorial(nb));
		return (0);
	}
	else
	{
		printf("Este programa recebe um número inteiro como argumento.");
		return (0);
	}
}

