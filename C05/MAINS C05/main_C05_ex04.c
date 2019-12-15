/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C05_ex04.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 09:50:38 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/12 10:15:55 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int index);

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int index;

		index = atoi(argv[1]);
		printf("Elemento %d da sequência de Fibonacci  = %d\n", index, ft_fibonacci(index));
		return (0);
	}
	else
	{
		printf("Este programa recebe um número inteiro como argumento.");
		return (0);
	}
}


