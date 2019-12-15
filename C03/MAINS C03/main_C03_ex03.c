/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C03_ex03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:10:12 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/04 14:12:36 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char *src;
	char *dest;	
	char string1[2] = "Le";
	char string2[50] = "Hello";
	
	src = string1;
	dest = string2;
	//printf("%s\n", strncat(dest, src, 2));
	printf("%s\n", ft_strncat(dest, src, 2));
	return (0);
}
