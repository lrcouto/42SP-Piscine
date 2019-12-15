/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C03_ex01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 09:48:02 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/03 14:39:32 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "String de teste";
	char s2[] = "Eu declaro e dou valou para variáveis na mesma linha no meu main e você não pode me impedir, Norminette!";

	printf("Função strncmp original: %d\n", strncmp(s1, s2, 10));
	printf("Versão pirata feita por mim: %d\n", ft_strncmp(s1, s2, 10));
	return (0);
}
