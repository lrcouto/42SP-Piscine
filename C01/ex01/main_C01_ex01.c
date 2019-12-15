/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:03:00 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/26 18:43:35 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int josevaldo;

	josevaldo = 6;
	int *pt = &josevaldo;
	int **pt2 = &pt;
	int ***pt3 = &pt2;
	int ****pt4 = &pt3;
	int *****pt5 = &pt4;
	int ******pt6 = &pt5;
	int *******pt7 = &pt6;
	int ********pt8 = &pt7;
	int *********pt9 = &pt8;

	ft_ultimate_ft(pt9);
	printf("O VALOR DESSA BOSTA É %d" , josevaldo);
}
