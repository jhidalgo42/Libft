/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:05:07 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/18 18:32:36 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;

	i = ft_strlen(dst);
	dlen = ft_strlen((char *)src);
	j = 0;
	if (size == 0)
		return (dlen);
	if (size < i)
		dlen = dlen + size;
	else
		dlen = dlen + i;
	while (src[j] != '\0' && i + 1 < size && dst != src)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dlen);
}
