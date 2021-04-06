/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:05:07 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 18:11:07 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;

	i = ft_strlen(dest);
	dlen = ft_strlen(src);
	j = 0;
	if (size == 0)
	{
		return (dlen);
	}
	if (size < i)
	{
		dlen = dlen + size;
	}
	else
		dlen = dlen + i;
	while (src[j] != '\0' && i + 1 < size && dest != src)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen);
}