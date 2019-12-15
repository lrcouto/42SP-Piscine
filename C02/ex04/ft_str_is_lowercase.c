/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:29:24 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 19:40:28 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int counter;
	int togl;

	togl = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str < 97)
		{
			togl = 0;
		}
		else if (*str > 122)
		{
			togl = 0;
		}
		str++;
		counter = *str;
	}
	return (togl);
}
