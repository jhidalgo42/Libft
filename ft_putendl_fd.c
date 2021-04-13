/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:36 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 15:50:28 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, sizeof(ft_strlen(s) * sizeof(char *)));
	write(fd, "\n", 1);
}
