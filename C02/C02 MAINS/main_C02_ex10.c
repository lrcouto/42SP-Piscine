/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex10.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:30:52 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 17:29:08 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
   char src[ ] = "Essa é uma string de teste!!!";
   char dest[ 3 ];

   strlcpy(dest, src, 2);
   dest[ 2 ] = '\0';
   printf("FUNÇÃO STRLCPY ORIGINAL: %s\n", dest);
   ft_strlcpy(dest, src, 2);
   printf("MINHA FUNÇÃO: %s\n", dest);
   return 0;
}
