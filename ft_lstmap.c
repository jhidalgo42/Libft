#include "libft.h" 

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;

	if (!lst || !f)
		return (NULL);
	
	while (lst)
	{
		map = lstnew(f(lst->content));
	}
}
