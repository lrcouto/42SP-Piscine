/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C03_ex05.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:23:40 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/04 20:18:47 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[50] = "abcde";
	char dest[50] = "xyz";

	printf("%lu\n", strlcat(src, dest, 5));
	printf("%u\n", ft_strlcat(src, dest, 5));
	return (0);
}
