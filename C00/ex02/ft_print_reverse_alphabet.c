/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 09:50:37 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/24 13:12:43 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alpharev;

	alpharev = 'z';
	while (alpharev >= 'a')
	{
		write(1, &alpharev, 1);
		alpharev--;
	}
}
