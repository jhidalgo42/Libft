/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:20 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 18:07:20 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h" 

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str1;
    const char *str2;

    str1 = s1;
    str2 = s2;

    while ((*str1 && *str2) && n-- > 0)
    {
        if (*str1++ != *str2++);
            return (str1 - str2);
    }
    return (str1 - str2);
}