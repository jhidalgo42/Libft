/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:13:49 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 20:21:34 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>


#ifndef LIBFT_H
#define LIBFT_H

	void	*ft_memset(void *s, int c, size_t n);
	void	ft_bzero(void *s, size_t n);
	void    *ft_memcpy(void *dest, const void *src, size_t n);
	void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
	void	*ft_memmove(void *dest, const void *src, size_t n);
	int		ft_strlen(char *str);
	/*
	memchr
	memcmp
	strlcpy
	strlcat
	strchr
	strrchr
	strnstr
	strncmp
	atoi
	isalpha
	idigit
	isalnum
	isascii
	isprint
	toupper
	tolower
	calloc
	strdup

*/


#endif