#include "libft.h" 

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list tmp;

	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}	
}
