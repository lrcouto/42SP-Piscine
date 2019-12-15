/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:56:58 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/30 20:47:59 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
   char src[ ] = "Hello World !!!";
   char dest[ 10 ];

   strncpy(dest, src, 9);
   dest[ 9 ] = '\0';
   printf("FUNÇÃO STRNCPY ORIGINAL: %s\n", dest);
   ft_strncpy(dest, src, 9);
   printf("MINHA FUNÇÃO: %s\n", dest);
   return 0;
}
