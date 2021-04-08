/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:31 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 18:10:31 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void ft_putstr_fd(char *s, int fd)
{
	write(fd, s, sizeof(ft_strlen(s) * sizeof(char *)));
}
	