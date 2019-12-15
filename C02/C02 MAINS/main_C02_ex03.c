/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:41:01 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 19:26:02 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	int result;
	
	result = ft_str_is_numeric("0123456789");
	printf("Só números = %d\n", result);
	result = ft_str_is_numeric("Testando, testando, 123!!");
	printf("Números e outros símbolos = %d\n", result);
	result = ft_str_is_numeric("");
	printf("String vazia = %d\n", result);
	return (0);
}

