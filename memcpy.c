/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:28 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 20:20:40 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*v_dest;
	const char	*v_src;

	v_dest = dest;
	v_src = src;
	if (n <= 0)
		{
			return (dest);
		}
	if (ft_strlen(v_dest) > ft_strlen((char*)v_src))
	{
		dest = ft_memmove(dest, src, n);
		return (dest);
	}
	else
	{
		while (n-- > 0)
		{
			*v_dest++ = *v_src++;
		}
		return (v_dest);
	}
}