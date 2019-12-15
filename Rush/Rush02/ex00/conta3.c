/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conta3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:19:47 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/08 18:19:03 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);

int		conta3(char *str)
{
	int aux;
	int lixo;

	aux = 0;
	lixo = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] > '0' && str[aux] <= '9')
		{
			while (str[aux] >= '0' && str[aux] <= '9')
				aux++;
			return (((aux - lixo) / 3) + 1);
		}
		aux++;
		lixo++;
	}
	return (0);
}

int		resto(char *str)
{
	int aux;
	int lixo;

	aux = 0;
	lixo = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] > '0' && str[aux] <= '9')
		{
			while (str[aux] >= '0' && str[aux] <= '9')
				aux++;
			return ((aux - lixo) % 3);
		}
		aux++;
		lixo++;
	}
	return (0);
}

void	coloca_zero(char *str)
{
	int resto;
	char *p;

	resto = resto(str);
	if (resto == 1)
	{
		p = malloc(ft_strlen(str) + 2);
		//colocar 00str
	}
	else if (resto == 2)
	{
		p = malloc(ft_strlen(str) + 1);
		//colocar 0str
	}
}
char	*trata3(char *str)
{
	char	t[3];
	int		j;
	
	j = 0;
	coloca_zero(str);
	while (str)
	{
		if (*str > '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9' && j < 3)
			{
				t[j] = *str;
				j++;
				str++;
			}
			return t;
		}
	}
}
