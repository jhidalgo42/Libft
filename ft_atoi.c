/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:00:39 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 14:47:11 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_atoi(const char *nptr)
{
	long	numero;
	int		negativo;
	char	*ptr;

	ptr = (char *)nptr;
	numero = 0;
	negativo = 1;
	while ((*ptr == ' ') || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			negativo = -negativo;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		numero = numero * 10 + *ptr++ - 48;
		if ((numero * negativo) > 2147483647)
			return (-1);
		else if ((numero * negativo) < -2147483648)
			return (0);
	}
	return ((int)numero * negativo);
}
