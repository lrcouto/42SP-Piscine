/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 20:43:11 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 20:36:58 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 97) && (str[counter] <= 122))
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}
