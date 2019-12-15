/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:33:00 by lcouto            #+#    #+#             */
/*   Updated: 2019/11/29 19:25:02 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int counter;
	int togl;

	togl = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str <= 64)
		{
			togl = 0;
		}
		else if ((*str > 90) && (*str <= 96))
		{
			togl = 0;
		}
		else if (*str >= 123)
		{
			togl = 0;
		}
		str++;
		counter = *str;
	}
	return (togl);
}
