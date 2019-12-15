/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:14:18 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/02 16:11:54 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z' &&
		!(str[counter - 1] >= '0' && str[counter - 1] <= '9') &&
		!(str[counter - 1] >= 'A' && str[counter - 1] <= 'Z'))
		{
			str[counter] -= 32;
		}
		if (str[counter] >= 'A' && str[counter] <= 'Z' &&
		((str[counter - 1] >= '0' && str[counter - 1] <= '9') ||
		(str[counter - 1] >= 'a' && str[counter - 1] <= 'z') ||
		(str[counter - 1] >= 'A' && str[counter - 1] <= 'Z')))
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}
