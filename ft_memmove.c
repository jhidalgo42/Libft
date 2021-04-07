/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:36 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/07 18:07:05 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*v_dest;
	const char	*v_src;

	v_dest = dest;
	v_src = src;
	if (n <= 0)
	{
		return (dest);
	}
	if (ft_strlen(v_dest) <= ft_strlen((char *) v_src))
	{
		dest = ft_memcpy(dest, src, n);
		return (dest);
	}
	else
	{
		v_dest += n;
		v_src += n;
		while (n-- > 0)
		{
			*v_dest-- = (char)v_src--;
		}
		return (v_dest);
	}
}
