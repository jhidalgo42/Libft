/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:13 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/08 18:19:53 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dst;
	const unsigned char		*sr;
	unsigned char q;

	dst = dest;
	sr = src;
	q = (unsigned char) c;
	if ((!src && !dst) && n <= 0)
		return (NULL);
	while (n-- > 0)
	{
		*dst++ = *sr++;
		if (*(sr + 1) == '\0' && n == 1)
			return (NULL);
	}
	if (*sr == q)
	{
		return ((void *) dst + 1);
	}
	else
		return (NULL);
}
