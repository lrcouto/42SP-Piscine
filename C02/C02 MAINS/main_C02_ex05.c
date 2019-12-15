/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex05.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:50:11 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 19:56:43 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	int result;
	
	result = ft_str_is_uppercase("APENASMAIUSCULASAAAAAAAAA");
	printf("Só maiúsculas = %d\n", result);
	result = ft_str_is_uppercase("Não Apenas Maiúsculas =)");
	printf("Não só maiúsculas = %d\n", result);
	result = ft_str_is_uppercase("");
	printf("String vazia = %d\n", result);
	return (0);
}
