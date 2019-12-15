/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex07.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 10:34:31 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 20:36:52 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str[] = "Outra Frase 238492 &#@$ lalalala!!!!";

	printf("String resultante: %s\n", ft_strupcase(str));
	return (0);
}
