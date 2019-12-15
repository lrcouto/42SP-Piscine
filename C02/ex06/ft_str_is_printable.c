/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:22:06 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 20:36:41 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int counter;
	int togl;

	togl = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str < 32)
		{
			togl = 0;
		}
		else if (*str > 127)
		{
			togl = 0;
		}
		str++;
		counter = *str;
	}
	return (togl);
}
