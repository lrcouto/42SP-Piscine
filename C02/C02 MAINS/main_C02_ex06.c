/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex06.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:21:44 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 20:36:43 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	int result;
	
	result = ft_str_is_printable("Todos podem ser printados!!");
	printf("Chars printáveis = %d\n", result);
	result = ft_str_is_printable("Um monte de char estranho: œ®ÆØ");
	printf("Chars não-printáveis = %d\n", result);
	result = ft_str_is_printable("");
	printf("String vazia = %d\n", result);
	return (0);
}
