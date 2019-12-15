/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:22:19 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/30 20:37:20 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[] = "Isso é um teste.";
	char src[] = "Olá, 42!";

	printf("Dest antes da função: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Dest depois da função: %s\n", dest);
	printf("strcpy original para comparar: %s\n", strcpy(dest, src));
	return (0);
}
