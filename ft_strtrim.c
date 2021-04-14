/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:16 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 17:17:25 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
// #include <stdio.h>


// size_t	ft_strlen(char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*str++)
// 	{
// 		i++;
// 	}
// 	return (i);
// }

static int	check_set(char const *s1, char const *set, int j)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (set[i])
	{
		if (s1[j] == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	start_str(char const *s1, char const *set)
{
	int	j;

	j = 0;
	while (s1[j] && check_set(s1, set, j))
	{
		j++;
	}
	return (j);
}

static int	end_str(char const *s1, char const *set)
{
	int	j;

	j = ft_strlen((char *)s1) - 1;
	while (check_set(s1, set, j))
	{
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = start_str(s1, set);
	end = end_str(s1, set);
	if (end <= start)
		end = start;
	str = (char *)malloc((end - start +1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main (void)
// {
// 	const char	*s1 = "   \t   \n\n\nHello \t  Please\n Trim e !\n   \n t\t\n  ";
// 	const char	*set = " \n\t";

// 	printf("%s", ft_strtrim(s1, set));
// 	return (0);
// }
