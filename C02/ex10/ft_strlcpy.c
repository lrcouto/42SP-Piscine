/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:20:34 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 17:29:02 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int counter;

	counter = 0;
	while ((counter < size) && (src[counter] != '\0'))
	{
		dest[counter] = src[counter];
		counter++;
		if (counter == (size - 1))
		{
			dest[counter] = '\0';
			counter++;
		}
	}
	return (*dest);
}
