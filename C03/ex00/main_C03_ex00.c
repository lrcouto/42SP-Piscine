/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C03_ex00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:48:35 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/03 19:42:34 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "Teste mais comprido dessa vez";
	char s2[] = "Teste";

	printf("Função original: %d\n", strcmp(s1, s2));
	printf("Minha função: %d\n", ft_strcmp(s1, s2));
}
