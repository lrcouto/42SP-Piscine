/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:42:11 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/05 10:44:55 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int g_find_counter;

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int str_counter;

	str_counter = 0;
	g_find_counter = 0;
	if (*to_find == '\0')
		return (str);
	while (str[str_counter] != '\0')
	{
		if (str[str_counter] == to_find[g_find_counter])
		{
			str_counter++;
			g_find_counter++;
		}
		else
		{
			str_counter++;
			g_find_counter = 0;
		}
		if (to_find[g_find_counter] == '\0')
		{
			str = &str[str_counter - g_find_counter];
			return (str);
		}
	}
	return (0);
}
