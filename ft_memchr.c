/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:17 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/12 18:09:43 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = s;
	if (c % 256 == 0 && n == 0)
		return (NULL);
	while (*str && n-- > 0)
	{
		if (*str == (const char)c % 256)
			return ((void *)str);
		str++;
	}
	if (c == 0)
		return ((void *)str);
	return (NULL);
}
