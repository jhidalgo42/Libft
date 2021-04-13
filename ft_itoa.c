/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:41 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 18:34:19 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_itoa(int n)
{
	int		tmp;
	int		i;
	int		neg;
	char	*ptr;

	tmp = n;
	neg = 0;
	if (tmp < 0)
	{
		neg = 1;
		tmp *= -1;
	}
	while (tmp / 10 > 0)
	{
		tmp /= 10;
		i++;
	}
	ptr = (char *)malloc((i + neg + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[i + neg] = 0;
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (i-- > 0)
	{
		*ptr = n % (10 * i);
	}
	return (ptr);
}
