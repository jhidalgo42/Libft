/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:59 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/12 19:45:24 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (c % 256 == 0)
		return (0);
	while (*str)
	{
		if (*str == c % 256)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}
