/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C04_ex03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:24:25 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/05 17:35:45 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("Função atoi original: %d\n", atoi("  ++---12345a5"));
	printf("Função atoi pirata: %d\n", ft_atoi("  ++---32a4212345a5"));
	return (0);
}
