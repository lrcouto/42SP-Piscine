/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:02:59 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/08 19:01:05 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		conta3(char *str);

int		resto(char *str);

int		coloca_zero(char *str);

char	*trata3(char *str);

int		ft_atoi(const char *str);

char	itoinha(int n);

int		print(char *t);

int		check_dezenas(char *t);

int		ft_strcmp(char *s1, char *s2);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_print_nospaces(char *str);

char	*dicio(void);

int		error(void);

char	*ft_strstr(char *str, char *to_find);

void	millions(int aux);
