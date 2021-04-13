/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:44 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 12:30:58 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	if (!(size || nmemb ))
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	return (ptr);
}
