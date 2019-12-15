/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:47:08 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 19:56:41 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int counter;
	int togl;

	togl = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str < 65)
		{
			togl = 0;
		}
		else if (*str > 90)
		{
			togl = 0;
		}
		str++;
		counter = *str;
	}
	return (togl);
}
