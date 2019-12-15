/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 14:54:58 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/03 17:52:19 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int src_counter;
	int dest_counter;

	src_counter = 0;
	dest_counter = 0;
	while (dest[dest_counter])
	{
		dest_counter++;
	}
	while (src[src_counter])
	{
		dest[dest_counter + src_counter] = src[src_counter];
		src_counter++;
	}
	dest[dest_counter + src_counter] = '\0';
	return (dest);
}
