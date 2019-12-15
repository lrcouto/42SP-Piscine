/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C06_ex05.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 11:56:15 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/12 12:06:01 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int nb;

		nb = atoi(argv[1]);
		printf("A raiz quadrada de %d é %d\n", nb, ft_sqrt(nb));
		return (0);
	}
	else
	{
		printf("Este programa recebe um número inteiro como argumento.");
		return (0);
	}
}

