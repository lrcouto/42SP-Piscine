/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 12:40:51 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/08 19:00:54 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		ft_atoi(const char *str)
{
	int counter;
	int is_negative;
	int ret;
	counter = 0;
	is_negative = 1;
	ret = 0;

	if (str[counter] == '-')
	{
		is_negative = -1;
		counter++;
	}
	if (!(str[counter] >= '0' && str[counter] <= '9'))
	{
		return (0);
	}
	while ((str[counter] != '\0') && (str[counter] >= '0' && str[counter] <= '9'))
	{
		ret = (ret * 10) + (str[counter] - '0');
		counter++;
	}
	return (ret * is_negative);
}

char	*itoinha(int n)
{
	char resultado[2];

	resultado[1] = (n % 10) + 48;
	resultado[0] = (n / 10) + 48;
	return (resultado);
}

int		print(char *t)
{
	int j;
	int aux_atoi;

	j = 0;
	if (t[0] > '0')
	{
		print_nospaces(ft_strstr(t));
		write(1, "hundred", 7);
		j++;
		str++;
	}
	if (t[1] >= '1')
	{
		j = check_dezena(t);
		str++;
	}
	if (t[2] >= '1')
	{
		print_nospaces(ft_strstr(t));
		j++;
	}
	return (j);
}

int		check_dezena(char *t)
{
	aux_atoi = (ft_atoi(t) % 100);
	if (aux_atoi >= 20)
	{
		aux_atoi = ((aux_atoi / 10) * 10);
		j++;
		print_nospaces(ft_strstr(aux_atoi));
	}
	else if (aux_atoi > 9)
	{
		print_nospaces(ft_strstr(aux_atoi));
		j++;
		return (j);
	}
	return (j);
}

void	millions(int aux)
{

