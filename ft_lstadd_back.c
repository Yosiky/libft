#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;

	if (*lst == (void *)0)
		*lst = new;
	else
	{
		iter = *lst;
		while (iter->next != (void *)0)
			iter = iter->next;
		iter->next = new;
	}
}
