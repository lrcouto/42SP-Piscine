/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 11:45:48 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/09 15:46:39 by lcouto           ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != 0) && (*s2 != 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_args(int argc, char *argv[])
{
	int		i;
	char	*aux;
	int		j;

	i = 0;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
		}
	}
}

int		main(int argc, char *argv[])
{
	int counter;

	counter = 1;
	sort_args(argc, argv);
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
