#include <stddef.h>

typedef	unsigned long long ull;

static	void	*ft_completion(ull *ptrs, size_t len, ull c)
{	
	while (len--)
	{
		ptrs[0] = c;	
		ptrs[1] = c;	
		ptrs[2] = c;	
		ptrs[3] = c;	
		ptrs[4] = c;	
		ptrs[5] = c;	
		ptrs[6] = c;	
		ptrs[7] = c;	
		ptrs += 8;
	}
	return (ptrs);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		len;	
	ull			ptrs;
	ull			cccccccc;

	ptrs = (ull)s;
	// Create value with 64 bits
	cccccccc = (unsigned char)c;
	cccccccc |= cccccccc << 8;
	cccccccc |= cccccccc << 16;
	cccccccc |= cccccccc << 32;

	ptrs = (ull)ft_completion((void *)ptrs, n / 64, cccccccc);
	len = n % 64 - n % 8;
	while (len)
	{
		*((ull *)ptrs++) = cccccccc;
		len -= 8;
	}
	len = n % 8;
	while (len--)
	{
		((unsigned char *)ptrs)[0] = (unsigned char)c;
		ptrs++;
	}
	return (s);
}
