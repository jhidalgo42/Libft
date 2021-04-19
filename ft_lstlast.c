/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:27:20 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/19 14:38:21 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	tmp->next = lst->next;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
