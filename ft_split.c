/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:28 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/18 20:59:06 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**print_array(char **array, char const *s, char c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s;
	while (*str != 0)
	{
		if (*str == c)
		{
			if (j != 0)
			{	
				array[i][j] = 0;
				i++;
				j = 0;
			}
			str++;
		}
		else if (*str != c)
		{
			array[i][j++] = *str++;
		}
	}
	return (array);
}

static int	num_words(char const *s, char c)
{
	int		i;
	int		word;
	int		newword;

	i = 0;
	word = 0;
	newword = 0;
	if (s[i] != c)
		newword = -1;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			if (newword == 0)
				newword = -1;
		}
		else if (s[i] != c && newword != 0)
		{
			word++;
			newword = 0;
		}
		i++;
	}
	return (word);
}

static int	len_word(char const *s, char c, int i)
{
	int		maxlen;

	maxlen = 0;
	while (s[i] != 0 && s[i] != c)
	{
		i++;
		maxlen++;
	}
	return (maxlen);
}

static int	n_separator(char const *s, char c, int i)
{
	int	j;

	j = 0;
	if (s[i] != c)
		return (0);
	else
	{
		while (s[i + j] == c && s[i + j] != 0)
		{
			j++;
		}
	}
	return (j);
}

static char	**create_array(char const *s, char c, char **array, int words)
{
	int	i;
	int	j;
	int	lwords;

	i = 0;
	j = 0;
	lwords = 0;
	while (i < words)
	{
		j += n_separator(s, c, j);
		lwords = len_word(s, c, j);
		j += lwords;
		array[i] = malloc((lwords + 1) * sizeof(char));
		ft_bzero(array[i], lwords + 1);
		i++;
	}
	array[i] = NULL;
	if (!array)
		return (NULL);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;

	if (!s)
		return (NULL);
	words = num_words(s, c);
	array = malloc((words + 1) * sizeof(char *));
	array = create_array(s, c, array, words);
	array = print_array(array, s, c);
	return (array);
}
