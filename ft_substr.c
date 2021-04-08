/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:12 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/07 18:03:04 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
char *strchr(const char *s, int c)
{
	return (s);
}
=======
#include "libft.h" 

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	str = (char *) malloc(len * sizeof(char *));
	while (len-- - start > 0)
	{
		*(str++ + start) = *s;
	}
	return (str);
}
>>>>>>> e5fdca290f67b8fea519a3f4190b61afc2c61a94
