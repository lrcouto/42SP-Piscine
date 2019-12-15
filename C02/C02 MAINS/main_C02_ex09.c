/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C02_ex09.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:15:39 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 14:38:03 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "oi, 3eu sou um /teste!";

	ft_strcapitalize(str);
	printf("String resultante: %s\n", str);
	return (0);
}
