/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:41 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 14:17:09 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	size_nb (int n)
{
	int		i;

	i = 0;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	int				neg;
	unsigned int	nb;
	char			*ptr;

	i = size_nb(n);
	neg = 0;
	if (n < 0)
		neg = 1;
	ptr = (char *)malloc((i + neg + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[i + neg] = 0;
	if (n < 0)
	{
		ptr[0] = '-';
		nb = (unsigned int)n * -1;
	}
	while (i-- > 0)
	{
		*ptr = nb % (10 * i);
	}
	return (ptr);
}
