/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:10:45 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/04 14:12:33 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int dcounter;
	unsigned int scounter;

	dcounter = 0;
	scounter = 0;
	while (dest[dcounter] != '\0')
	{
		dcounter++;
	}
	while ((scounter < nb) && (src[scounter] != '\0'))
	{
		dest[dcounter] = src[scounter];
		scounter++;
		dcounter++;
	}
	dest[dcounter] = '\0';
	return (dest);
}
