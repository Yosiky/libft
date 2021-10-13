#include "libft.h"

static	int	g_fd;

static	void	rec(long long n)
{
	char	sym;

	if (!n)
		return ;
	rec(n / 10);
	sym = '0' + n % 10;
	write(g_fd, &sym, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	g_fd = fd;
	if (n < 0)
		write(fd, "-", 1);
	if (n == 0)
		write(fd, "0", 1);
	else
		rec(n);
}
