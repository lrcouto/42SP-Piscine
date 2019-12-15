/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 14:54:39 by lcouto            #+#    #+#             */
/*   Updated: 2019/12/08 18:08:19 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*chave(//não sei oq recebe pq tem q usar o open,read,close)
{
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	while (str[i] != '0')
	{
		if (str[i] == '\n')
			cont = cont + 1;
		i++;
	}
	i = 0;
	char	chave[cont++];
	return (chave);
}
