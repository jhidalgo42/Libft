/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:41 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 17:33:49 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_itoa(int n)
{
	int		tmp;
	int		i;
	int		neg;
	char	*ptr;

	tmp = n;
	neg = 0;
	if (tmp < 0)
		neg = 1;
	while (tmp / 10 > 0)
	{
		tmp /= 10;
		i++;
	}
	ptr = (char *)malloc((i + neg) * sizeof(char));
	while (n / 10 > 0)
	{

	}
	return (ptr);
}