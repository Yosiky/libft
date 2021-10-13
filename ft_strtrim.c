#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void    *ft_strlcpy(void *dest, const void *src, size_t n);

static	size_t	skip_begin(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (ft_strchr(set, s1[start]) != (char *)0)
			start++;
	return (start);
}

static	size_t	skip_end(char const *s1, char const *set, size_t i, size_t s)
{
	size_t	end;

	end = s;
	while (i < end && ft_strchr(set, s1[end]) != (char *)0)
		end--;
	return (end);

}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	start = skip_begin(s1, set);
	end = ft_strlen(s1) - 1;
	end = skip_end(s1, set, start, end);
	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (result == (char *)0)
		return (result);
	ft_strlcpy(result, s1 + start, end - start + 2);
	return (result);
}
