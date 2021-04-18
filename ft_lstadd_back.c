#include "libft.h" 

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	ft_lstlast(*lst)->next = new;
	new->next = NULL;
}