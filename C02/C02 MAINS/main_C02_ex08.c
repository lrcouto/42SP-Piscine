/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex08.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:00:57 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 20:29:04 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "Oi, Eu Sou Um Teste!";
;
	printf("String resultante: %s\n", ft_strlowcase(str));
	return (0);
}
