/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C05_ex07.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:24:01 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/12 12:31:07 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		ft_find_next_prime(int nb);

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int nb;

		nb = atoi(argv[1]);
		printf("O número primo seguinte a %d é %d\n", nb, ft_find_next_prime(nb));
		return (0);
	}
	else
	{
		printf("Este programa recebe um número inteiro como argumento.");
		return (0);
	}
}
