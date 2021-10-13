#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == (void *)0)
		return ((void *)0);
	while (lst->next != (void *)0)
		lst = lst->next;
	return (lst);
}
