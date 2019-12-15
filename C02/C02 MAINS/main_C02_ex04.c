/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex04.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:28:52 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 19:40:30 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	int result;
	
	result = ft_str_is_lowercase("apenasletrasminusculas");
	printf("Só minúsculas = %d\n", result);
	result = ft_str_is_lowercase("Achou que eu não ia lembrar dos espaços, né, safadinho.");
	printf("Não só minúsculas = %d\n", result);
	result = ft_str_is_lowercase("");
	printf("String vazia = %d\n", result);
	return (0);
}
