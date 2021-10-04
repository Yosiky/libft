#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
*/
char	*ft_strchr(const char *s, int c);

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
	return (0);
}
