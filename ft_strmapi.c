#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	char	*result;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	if (result == (void *)0)
		return ((void *)0);
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	return (result);
}
