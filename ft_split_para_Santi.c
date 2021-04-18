// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2021/04/06 18:10:28 by jhidalgo          #+#    #+#             */
// /*   Updated: 2021/04/18 19:29:41 by jhidalgo         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>

// static char	**print_array(char **array, char const *s, char c, int max)
// {
// 	int		i;
// 	int		j;
// 	char	*str;

// 	i = 0;
// 	j = 0;
// 	str = (char *)s;
// 	while (*str != 0 && i < max)
// 	{
// 		if (*str == c)
// 		{
// 			if (j != 0)
// 			{	
// 				array[i][j] = 0;
// 				i++;
// 				j = 0;
// 			}
// 			str++;
// 		}
// 		else if (*str != c)
// 		{
// 			array[i][j++] = *str++;
// 		}
// 	}
// 	return (array);
// }

// static int	num_words(char const *s, char c)
// {
// 	int		i;
// 	int		word;
// 	int		newword;

// 	i = 0;
// 	word = 0;
// 	newword = 0;
// 	if (s[i] != c)
// 		newword = -1;
// 	while (s[i] != 0)
// 	{
// 		if (s[i] == c)
// 		{
// 			if (newword == 0)
// 				newword = -1;
// 		}
// 		else if (s[i] != c && newword != 0)
// 		{
// 			word++;
// 			newword = 0;
// 		}
// 		i++;
// 	}
// 	return (word);
// }

// static int	maxlen_word(char const *s, char c)
// {
// 	int		i;
// 	int		maxlen;
// 	char	*str;

// 	str = (char *)s;
// 	i = 0;
// 	maxlen = 0;
// 	while (*str)
// 	{
// 		if (*str == c)
// 		{
// 			if (i > maxlen)
// 				maxlen = i;
// 			i = 0;
// 		}
// 		else
// 			i++;
// 		str++;
// 	}
// 	if (i > maxlen)
// 		maxlen = i;
// 	return (maxlen);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	char	**array;
// 	int		lwords;
// 	int		words;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	words = num_words(s, c);
// 	lwords = maxlen_word(s, c);
// 	printf("%d\n", words);
// 	array = malloc((words + 1) * sizeof(char *));
// 	while (i < words)
// 	{
// 		array[i] = malloc((lwords + 1) * sizeof(char));
// 		ft_bzero(array[i], lwords + 1);
// 		i++;
// 	}
// 	printf("%d\n", i);
// 	array[i] = NULL;
// 	if (!array)
// 		return (NULL);
// 	array = print_array(array, s, c, words);
// 	printf("%s\n", array[12]);
// 	return (array);
// }

// // int main (void)
// // {
// // 	char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// // 	char **result = ft_split(s, ' ');
// // 	char *str;

// // 	printf("res = %s\n", result[12]);

// // 	int i = 0;

// // 	printf("\nEX01\n");
// // 	while (result[i])
// // 	{
// // 		printf("%s\n", result[i]);
// // 		i++;
// // 	}
// // 	printf("i = %d\n", i);
// // 	i = 0 ;
// // 	free (result);
// // 	printf("\nEX02\n");
// // 	s = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
// // 	result = ft_split(s, ' ');
// // 	while (*result[i])
// // 	{
// // 		printf("%s\n", result[i]);
// // 		i++;
// // 	}
// // 	i = 0 ;
// // 	printf("\nEX03\n");
// // 	s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
// // 	result = ft_split(s, 'i');
// // 	while (*result[i])
// // 	{
// // 		printf("%s\n", result[i]);
// // 		i++;
// // 	}
// // 	i = 0 ;
// // 	free (result);
// // 	printf("\nEX04\n");
// // 	s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
// // 	result = ft_split(s, 'z');
// // 	while (*result[i])
// // 	{
// // 		printf("%s\n", result[i]);
// // 		i++;
// // 	}
// // 	i = 0;
// // 	free (result);
// // 	printf("\nEX05\n");
// // 	str = "      split       this for   me  !       ";
// // 	result = ft_split(str, ' ');
// // 	while (*result[i])
// // 	{
// // 		printf("%s\n", result[i]);
// // 		i++;
// // 	}
// // 	i = 0 ;
// // 	free (result);
// // 	printf("\nEX06\n");
// // 	str = "splote  ||t his|f´or|m-e|||||!|";
// // 	result = ft_split(str, '|');
// // 	while (*result[i])
// // 	{
// // 		printf("%s\n", result[i]);
// // 		i++;
// // 	}
// // 	free (result);
// // 	return (0);
// // }
