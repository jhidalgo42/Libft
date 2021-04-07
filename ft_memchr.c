/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:17 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/07 18:08:48 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = s;
	while (*str && n-- > 0)
	{
		if (*str == (const char)c)
			return (str);
		str++;
	}
	return (0);
}
