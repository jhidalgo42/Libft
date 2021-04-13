/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:28 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 19:51:54 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int		i;
	int		words;
	char	*str;
	
	
	str = (char)s;
	while ()
	
}

static int	maxlen_word(char const *s, char c)
{
	int		i;
	int		maxlen;
	char	*str;
	
	str = (char)s;
	i = 0;
	maxlen = 0;
	while (!s)
	{
		if (*s == c)
		{
			if (i > maxlen)
				maxlen = i;
			else
				i = 0;
		}
		else
			i++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	array = (char **)malloc(num_words(s, c) * sizeof(char *));
	while (i > 0)
	{
		array[i] = (char *)malloc(maxlen_word(s, c) * sizeof(char));
		i--;
	}
	j = 0;
	while (!s)
	{
		if (*s == c && j != 0)
		{
			i++;
			j = 0;
		}
		else if (*s == c && j == 0)
			s++;
		else
			array[i][j++] = *s++;
	}
	return (array);
}
