/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C04_ex03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:24:25 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/09 11:41:23 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("Função atoi original: %d\n", atoi(""));
	printf("Função atoi pirata 1: %d\n", ft_atoi("  ++--2147a483647"));
	printf("Função atoi pirata 2: %d\n", ft_atoi("  ++-a--2a147483648"));
	printf("Função atoi pirata 3: %d\n", ft_atoi("\n\t\f\v\r  ++--2147483647"));
	printf("Função atoi pirata 4: %d\n", ft_atoi("  ++--2147483648"));
	return (0);
}
