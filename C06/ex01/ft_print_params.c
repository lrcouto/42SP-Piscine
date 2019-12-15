/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:40:36 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/06 20:02:49 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

int		main(int argc, char *argv[])
{
	int counter;

	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
