#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	while (lst != (void *)0)
	{
		(*del)(lst->content);
		lst = lst->next;
	}
}
