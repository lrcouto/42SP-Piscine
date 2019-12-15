/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:39:38 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 19:16:59 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int counter;
	int togl;

	togl = 1;
	counter = *str;
	while (counter != '\0')
	{
		if ((*str < 48) || (*str > 57))
		{
			togl = 0;
		}
		str++;
		counter = *str;
	}
	return (togl);
}
