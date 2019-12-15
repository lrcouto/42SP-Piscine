/* ************************************************************************** */
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
