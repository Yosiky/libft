#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	const int	size = 10;
	char		str[size];

	str[size - 1] = '\0';
	ft_memset(str, 'c', size - 1);
	for (int i = 1; i <= size; i++)
		printf("%d. %c\n", i, str[i - 1]);
	return (0);
}
