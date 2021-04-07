/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:04:32 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/07 18:04:18 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	i = 0;
	size_src = 0;
	while (src[size_src] != 0)
		size_src++;
	while (i < size - 1 && size >= 2)
	{
		if (i <= size_src - 1)
			dst[i] = src[i];
		else
			dst[i] = 0;
		i++;
	}
	if (size_src != 0)
		dst[i] = 0;
	return (size_src);
}
