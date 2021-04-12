/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:08:02 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/12 19:57:41 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	if (!s)
		return((char*)s);
	i = 0;
	str = (char *) malloc(ft_strlen((char *)s) * sizeof(char *));
	while (s[i] != 0)
	{
		str[i] = s[i];
		i++;
	}
	str[i + 1] = (char) 0;
	return (str);
}
