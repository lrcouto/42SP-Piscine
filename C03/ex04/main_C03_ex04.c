/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C03_ex04.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:21:54 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/04 18:31:15 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
   char str[50] = "Qualquer\n -1 coisa serve!!";
   char to_find[50] = "-1";
   char *result;

	//result = strstr(str, to_find);
   //printf("Função original: %s\n", result);
   result = ft_strstr(str, to_find);
   printf("Função pirata: %s\n", result);
   return 0;
}
