/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:05:55 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 18:05:58 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int				j;

	i = 1;
	j = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[j] == s2[j] && i < n && s1[j] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	return ((int)s1[j] - s2[j]);
}
