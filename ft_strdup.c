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

#include <string.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	if (!s)
	{
		return((char*)s);
	}
	i = 0;
	str = (char *) malloc(ft_strlen((char *)s) * (int)sizeof(char *));
	while (s[i] != 0)
	{
		str[i] = s[i];
		i++;
	}
	str[i + 1] = (char) 0;
	return (str);
}

int		main(void)
{
	write(1, strdup("zyxwvutsrqponmlkjihgfedcba"), 26);
	write(1, "\n", 1);
	write(1, ft_strdup("zyxwvutsrqponmlkjihgfedcba"), 26);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, strdup("zyxwvutst"), 9);
	write(1, "\n", 1);
	write(1, ft_strdup("zyxwvutst"), 9);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, strdup("zy\0xw\0vu\0\0tsr"), 13);
	write(1, "\n", 1);
	write(1, ft_strdup("zy\0xw\0vu\0\0tsr"), 13);
	write(1, "\n", 1);
	write(1, strdup(""), 1);
	write(1, "\n", 1);
	write(1, ft_strdup(""), 1);
	write(1, "\n", 1);
	return (0);
}
