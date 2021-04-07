/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:00:39 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/07 15:59:32 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_atoi(const char *nptr)
{
	int	numero;
	int	negativo;
	int	i;

	numero = 0;
	negativo = 1;
	i = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			negativo = -negativo;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		numero = numero * 10 + nptr[i] - 48;
		i++;
	}
	return (numero * negativo);
}
