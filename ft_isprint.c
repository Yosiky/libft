int	ft_isprint(int c)
{
	return (32 <= c && c <= 126 ? 16384 : 0);
}
