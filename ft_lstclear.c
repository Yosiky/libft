#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;

	while (*lst != (void *)0)
	{
		iter = *lst;
		(*del)(iter->content);
		(*lst) = (*lst)->next;
		free(iter);
	}
}
