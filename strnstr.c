/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:06:16 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 20:04:00 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0' && len-- > 0)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
			{
				return (&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}