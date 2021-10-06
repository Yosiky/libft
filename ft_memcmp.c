#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- && *((unsigned char *)s1) == *((unsigned char *)s2))
	{
		(unsigned char *)s1++;
		(unsigned char *)s2++;
	}
	if (*((char *)s1) == *((char *)s2))
		return (0);
	else if (*((char *)s1) < *((char *)s2))
		return (-1);
	return (1);
}
