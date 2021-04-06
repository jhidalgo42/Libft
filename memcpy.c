/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:28 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/06 18:07:30 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void * dest, const void * src, size_t n)
{
	char		*v_dest;
	const char	*v_src;

	v_dest = dest;
	v_src = src;
	if (n <= 0)
		{
			return (dest);
		}
	if (v_dest > v_src)
	{
		ft_memmove(dest, src, n);
	}
	else
	{
		while (n-- > 0)
		{
			*v_dest++ = v_src++;
		}
		return (v_dest);
	}
}