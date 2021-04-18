
#include "libft.h" 

t_list *ft_lstnew(void *content)
{
	t_list *list;
	size_t len;

	len = (ft_strlen(content) + 1);
	list->content = malloc (len * sizeof(t_list));
	ft_bzero(list->content, len);
	ft_strlcpy(list->content, content, len);
	list->next = NULL;
	return (list);
}
