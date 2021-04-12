/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:06:16 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/12 20:42:18 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = (char *)big;
	i = 0;
	// if ( !big)
	// 	return (ptr);
	if (little[0] == '\0')
		return (ptr);
	while (ptr[i] && len-- > 0)
	{
		j = 0;
		while ((ptr[i + j] && ptr[i + j] == little[j]) && j <= len)
		{
			if (little[j + 1] == '\0')
			{
				return (&ptr[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
