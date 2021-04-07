/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:13 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/07 18:09:18 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dst;
	const char	*sr;

	dst = dest;
	sr = src;
	while ((*sr && n-- > 0) && *sr != c)
	{
		*dst++ = *sr++;
		if (*(sr + 1) == '\0' || n == 1)
			return (0);
	}
	if (*sr == c)
	{
		return (dst + 1);
	}
	else
		return (0);
}
