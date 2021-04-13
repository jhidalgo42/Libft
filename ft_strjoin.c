/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:23 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 15:52:11 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	str = (char *) malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	i = 0;
	while (*s1)
	{
		*str = *s1;
		i++;
	}
	while (*s2)
	{
		*str = *s2;
		i++;
	}
	str[1] = 0;
	return ((str - (i + 1)));
}
