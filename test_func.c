#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);

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
	/*
	char	s[] = "Hello world";
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
	// ft_strncmp ft_memcmp
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
	printf("%s\'\n%s\'", word, copy);
	if (ft_memcmp(word, copy, 5) == memcmp(word, copy, 5))
		printf("YES\n");
	else
		printf("NO\n");
	if (ft_memcmp(word, copy + 3, 4) == memcmp(word, copy + 3, 4))
		printf("YES\n");
	else
		printf("NO %d %d\n", ft_memcmp(word, copy + 3, 4), memcmp(word, copy + 3, 4));
	return (0);
}
