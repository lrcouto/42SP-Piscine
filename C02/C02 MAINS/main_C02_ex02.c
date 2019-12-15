/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex02.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:33:53 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/30 20:58:45 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	int result;
	
	result = ft_str_is_alpha("EsseAquiVaiRetornarUm");
	printf("Só letras = %d\n", result);
	result = ft_str_is_alpha("Esse aqui vai retornar zero!");
	printf("Letras e outros símbolos = %d\n", result);
	result = ft_str_is_alpha("");
	printf("String vazia = %d\n", result);
	return (0);
}
