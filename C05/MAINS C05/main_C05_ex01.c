/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C05_ex01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:10:18 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/12 15:01:18 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int nb;

		nb = atoi(argv[1]);
		printf("Fatorial de %d é %d\n", nb, ft_recursive_factorial(nb));
		return (0);
	}
	else
	{
		printf("Este programa recebe um número inteiro como argumento.");
		return (0);
	}
}
