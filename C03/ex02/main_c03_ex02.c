/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c03_ex02.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:06:33 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/03 17:52:17 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strcat(char *dest, char *src);

int		main(void)
{
	char src[80] = "se você juntar as strings.";
	char dest[80] = "Essa mensagem só faz sentido ";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
