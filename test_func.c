#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
*/
int		ft_toupper(int c);

int	main(void)
{
	const int	size = 15;
	char		str[size];

	/*
	for (int i = size - 1; i >= 0; i--)
	{
		ft_bzero(str, i + 1);
		printf("%d. \tstr = '%s'\n", i, str);
		ft_memset(str, 'c', i);
		printf("\tstr = '%s'\n", str);
	}
	*/
	for (int i = 0; i < 256; i++)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("Error in %d\n", i);
			break;
		}
		printf("%d. %c = %c\n", i, i, ft_toupper(i));
	}
	return (0);
}
