/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:13 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/12 18:32:59 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dst;
	const char	*sr;
	char		q;

	dst = dest;
	sr = src;
	q = (unsigned char) c;
	while (n-- > 0 && *sr != c)
	{
		*dst++ = *sr++;
	}
	if (*sr == q)
		return ((void *) dst + 1);
	else
		return (NULL);
}
