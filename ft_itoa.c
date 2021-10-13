#include "libft.h"

static char *ft_completion(char *result, long long n, size_t len)
{
    int i;

    if (!n)
        result[0] = '0';
    else
    {
        i = 0;
        if (n < 0)
        {
            result[0] = '-';
            n *= -1;
        }
        while (n)
        {
            result[len - 1 - i] = (n % 10) + '0';
            i++;
            n /= 10;
        }
    }
    result[len] = '\0';
    return (result);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	long long	value;

	len = 0;
	value = n;
	if (n < 0)
		len++;
	while (value && ((len++) || 1))
		value /= 10;
    if (n == 0)
        len = 1;
    result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == (void *)0)
		return ((void *)0);
    ft_completion(result, n, len);
	return (result);
}
