/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 15:29:07 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/08 18:39:15 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

char	*dicio(void)
{
	int fd;
	int ret;
	char *buf;

	buf = malloc(1 * 4097);
	fd = open("numbers.dict", O_RDONLY, 0666);
	ret = read(fd, buf, 4096);
	buf[ret] = '\0';
	ft_putnbr(ret);
	ft_putstr(buf);
	if (close(fd) == -1)
	{
    	 ft_putstr("close() error");
	}
	return (buf);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*aux;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (to_find[j] == str[i])
			while (to_find[j] == str[i] || to_find == '\0')
			{
				if (to_find[i] == '\0')
				{
					while (!is_alpha(str))
						i++;
					return (&str[i]);
				}
				else
				{
					i++;
					j++;
				}
			}
	
		i++;
	}
	return (0);
}

