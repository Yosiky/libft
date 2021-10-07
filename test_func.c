#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_atoi(const char *str);

int	main(void)
{
	/*
	const int	size = 15;
	char		str[size];
*/
	// test for memset && bzero
	/*
	for (int i = size - 1; i >= 0; i--)
	{
		ft_bzero(str, i + 1);
		printf("%d. \tstr = '%s'\n", i, str);
		ft_memset(str, 'c', i);
		printf("\tstr = '%s'\n", str);
	}
	*/
	// test for toupper && tolower
	/*
	for (int i = 0; i < 256; i++)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("Error in %d (ft_toupper)\n", i);
			break;
		}
		if (ft_tolower(i) != tolower(i))
		{
			printf("Error in %d (ft_tower)\n", i);
			break;
		}
		printf("%d. %c = %c %c \n", i, i, ft_toupper(i), ft_tolower(i));
	}
	*/
	// test strchr and strrchr
	char	s[] = "Hello world";
	/*
	printf("%s\n", ft_strchr(s, 'H'));
	printf("%s\n", ft_strchr(s, 'e'));
	printf("%s\n", ft_strchr(s, 'l'));
	printf("%s\n", ft_strchr(s, 'o'));
	printf("%s\n", ft_strchr(s, ' '));
	printf("%s\n", ft_strchr(s, 'w'));
	printf("%s\n", ft_strchr(s, 'r'));
	printf("%s\n", ft_strchr(s, 'd'));
	printf("%s\n", ft_strchr(s, '\0'));
	printf("%s\n", ft_strchr(s, 'a'));
	printf("%s\n", ft_strrchr(s, 'H'));
	printf("%s\n", ft_strrchr(s, 'e'));
	printf("%s\n", ft_strrchr(s, 'l'));
	printf("%s\n", ft_strrchr(s, 'o'));
	printf("%s\n", ft_strrchr(s, ' '));
	printf("%s\n", ft_strrchr(s, 'w'));
	printf("%s\n", ft_strrchr(s, 'r'));
	printf("%s\n", ft_strrchr(s, 'd'));
	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s\n", ft_strrchr(s, 'a'));
	*/
	/*
	printf("%lu\n", ft_strlen(s));
	printf("%s\n", (char *)ft_memchr(s, 'H', ft_strlen(s)));
	printf("%s\n", (char *)ft_memchr(s, 'e', ft_strlen(s)));
	printf("%s\n", (char *)ft_memchr(s, 'l', ft_strlen(s)));
	printf("%s\n", (char *)ft_memchr(s, 'o', ft_strlen(s)));
	printf("%s\n", (char *)ft_memchr(s, ' ', ft_strlen(s)));
	printf("%s\n", (char *)ft_memchr(s, 'w', ft_strlen(s) - 5));
	printf("%s\n", (char *)ft_memchr(s, 'r', ft_strlen(s)));
	printf("%s\n", (char *)ft_memchr(s, 'd', ft_strlen(s)));
	printf("%s\n", (char *)ft_memchr(s, '\0', ft_strlen(s) + 1));
	printf("%s\n", (char *)ft_memchr(s, 'a', ft_strlen(s)));
	*/
	// ft_strncmp ft_memcmp
	/*	
	char	word[] = "Hello, world!";
	char	copy[14];
	printf("len(\"%s\") = %zu\n", word, ft_strlen(word));
	printf("copy = %s\n", (char *)ft_memcpy(copy, word, 14));
	if (ft_strncmp(word, copy, 5) == strncmp(word, copy, 5))
		printf("YES\n");
	else
		printf("NO\n");
	if (ft_strncmp(word + 3, copy, 4) == strncmp(word + 3, copy, 4))
		printf("YES\n");
	else
		printf("NO\n");
	printf("Test ft_memcmp:\n");
	if (ft_memcmp(word, copy, 5) == memcmp(word, copy, 5))
		printf("YES\n");
	else
		printf("NO\n");
	if (ft_memcmp(word + 3, copy, 4) == memcmp(word + 3, copy, 4))
		printf("YES\n");
	else
		printf("NO %d %d\n", ft_memcmp(word + 3, copy, 4), memcmp(word + 3, copy, 4));
	*/	
	char	word[] = "Hello world!";
	char	copy[20]; 
	
	ft_memset(copy, 0, 20);
	printf("\'%s\'\n", copy);
	int n = ft_strlcat(copy, word, 20);
	printf("\'%s\' %d\n", copy, n);

	ft_memset(copy, 0, 20);
	printf("\'%s\'\n", copy);
	int m = strlcat(copy, word, 20);
	printf("\'%s\' %d\n", copy, m);
	
	printf("TEST2\n");
	ft_memset(copy, 'a', 20);
	ft_memcpy(copy, "World", 5);
	copy[5] = 0;
	printf("\'%s\'\n", copy);
	n = ft_strlcat(copy, word, 20);
	printf("\'%s\' %d\n", copy, n);

	ft_memset(copy, 'a', 20);
	ft_memcpy(copy, "World", 5);
	copy[5] = 0;
	printf("\'%s\'\n", copy);
	m = strlcat(copy, word, 20);
	printf("\'%s\' %d\n", copy, m);
	printf("%s", copy + 9);
	// test for ft_strlcpy
	/*
	ft_memset(copy, 0, 20);
	ft_memset(copy, 'a', 19);
	printf("\'%s\'\n", copy);
	int n = ft_strlcpy(copy, word, 20);
	printf("\'%s\' %d\n", copy, n);
	ft_memset(copy, 0, 20);
	ft_memset(copy, 'a', 19);
	int m = strlcpy(copy, word, 20);
	printf("\'%s\' %d\n", copy, m);

	ft_memset(copy, 0, 20);
	ft_memset(copy, 'a', 19);
	printf("TEST2\'%s\'\n", copy);
	n = ft_strlcpy(copy, word, 10);
	printf("\'%s\' %d\n", copy, n);
	ft_memset(copy, 0, 20);
	ft_memset(copy, 'a', 19);
	m = strlcpy(copy, word, 10);
	printf("\'%s\' %d\n", copy, m);
	*/
	// test for ft_memmove
	/*
	printf("Test one :");
	ft_memmove(copy, word, ft_strlen(word));
	printf("\'%s\'\n", copy);
	printf("\'%s\'\n", ft_memmove(copy, copy + 3, 5));
	ft_memmove(copy, word, ft_strlen(word));
	printf("\'%s\'\n", copy);
	printf("\'%s\'\n", memmove(copy, copy + 3, 5));
	printf("Test two :");
	ft_memmove(copy, word, ft_strlen(word));
	printf("\'%s\'\n", copy);
	printf("\'%s\'\n", ft_memmove(copy + 3, copy, 5));
	ft_memmove(copy, word, ft_strlen(word));
	printf("\'%s\'\n", copy);
	printf("\'%s\'\n", memmove(copy + 3, copy, 5));
	*/
	// test for ft_strnstr
	/*
	ft_memset(copy, 0, 20);
	printf("\'%s\' \'%s\'\n", strnstr(word, copy, 1), ft_strnstr(word, copy, 1));
	ft_memmove(copy, "el", 3);
	printf("\'%s\' \'%s\'\n", strnstr(word, copy, 1), ft_strnstr(word, copy, 1));
	printf("\'%s\' \'%s\'\n", strnstr(word, copy, 3), ft_strnstr(word, copy, 3));
	printf("\'%s\' \'%s\'\n", strnstr(word, copy, 0), ft_strnstr(word, copy, 0));
	*/
	/*
	char	value[] = "-123";

	printf("\n");
	printf("%d %d\n", ft_atoi(value), atoi(value));
	printf("%d %d\n", ft_atoi(value + 1), atoi(value + 1));
	ft_memcpy(value, "+-123", 6);
	printf("%d %d\n", ft_atoi(value), atoi(value));
	ft_memcpy(value, "+1-23", 6);
	printf("%d %d\n", ft_atoi(value), atoi(value));
	*/
	return (0);
}
