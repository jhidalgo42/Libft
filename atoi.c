/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:00:39 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 19:48:43 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int		ft_atoi(const char *nptr) //Pendiente de revisión de los negativos y dígitos restantes. Lo tengo en el examen o en el Rush02
{
	int numero;
	int negativo;
	int i;

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
