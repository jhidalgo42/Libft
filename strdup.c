/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:08:02 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 18:08:03 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	char *str;
	int i;

	i = 0;
	str = (char *) malloc(ft_strlen(s) * sizeof(const char *));
	while (s[i] != 0)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}