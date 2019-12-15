/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:19:23 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/06 17:42:28 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_negatives(char *str, int counter);

int		count_spaces(char *str, int counter);

int		ft_atoi(char *str)
{
	int result;
	int is_negative;
	int counter;

	result = 0;
	is_negative = 1;
	counter = 0;
	counter = count_spaces(str, counter);
	counter = count_negatives(str, counter);
	if (counter < 0)
	{
		counter = counter * -1;
		is_negative = -1;
	}
	while ((str[counter] != '\0') &&
	(str[counter] >= 48) && (str[counter] <= 57))
	{
		result = (result * 10) + (str[counter] - '0');
		counter++;
	}
	return (is_negative * result);
}

int		count_spaces(char *str, int counter)
{
	while ((str[counter] == '\t') || (str[counter] == '\v') ||
	(str[counter] == '\f') || (str[counter] == '\r') ||
	(str[counter] == '\n') || (str[counter] == ' '))
	{
		counter++;
	}
	return (counter);
}

int		count_negatives(char *str, int counter)
{
	int negcounter;

	negcounter = 1;
	while ((str[counter] == '+') || (str[counter] == '-'))
	{
		if (str[counter] == '-')
		{
			negcounter = negcounter * -1;
		}
		counter++;
	}
	return (counter * negcounter);
}
