/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C05_ex06.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:08:15 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/12 12:14:26 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int nb;

		nb = atoi(argv[1]);
		if (ft_is_prime(nb) == 1)
		{
			printf("%d é um número primo\n", nb);
			return (0);
		}
		else if (ft_is_prime(nb) == 0)
		{
			printf("%d NÃO é um número primo\n", nb);
		}
	}
	else
	{
		printf("Este programa recebe um número inteiro como argumento.");
		return (0);
	}
}


