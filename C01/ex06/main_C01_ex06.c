/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C01_ex06.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:26:49 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/27 16:10:39 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	int result;

	result = ft_strlen("Adivinha quantos chars tem nessa string???");
	printf("%d\n", result);
	return (0);
}
