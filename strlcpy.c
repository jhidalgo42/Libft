/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:04:32 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 18:08:42 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int size_src;

	i = 0;
	size_src = 0;
	while (src[size_src] != 0)
		size_src++;
	while (i < size - 1 && size >= 2)
	{
		if (i <= size_src - 1)
			dest[i] = src[i];
		else
			dest[i] = 0;
		i++;
	}
	if (size_src != 0)
		dest[i] = 0;
	return (size_src);
}
