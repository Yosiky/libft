#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	const int	size = 15;
	char		str[size];

	memset(str, 0, size);
	for (int i = 0; i < size; i++)
	{
		memset(str, 0, i);
		printf("%d. \tstr = '%s'\n", i, str); 
		ft_memset(str, 'c', i);
		printf("\tstr = '%s'\n", str);
	}
	return (0);
}
