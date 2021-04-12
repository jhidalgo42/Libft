/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:09:46 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/12 19:49:32 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str);
	if (c % 256 == 0)
		return (0);
	while (str[len])
	{
		if (str[len] == c % 256)
			return (str);
		len--;
	}
	if (c == 0)
		return (str);
	return (0);
}
