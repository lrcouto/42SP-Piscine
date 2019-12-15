/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:00:06 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 20:29:07 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 65) && (str[counter] <= 90))
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}
