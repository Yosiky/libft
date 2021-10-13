#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result == (void *)0)
		return (result);
	result->next = (void *)0;
	result->content = content;
	return (result);
}
