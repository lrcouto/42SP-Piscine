/* ************************************************************************** */
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
