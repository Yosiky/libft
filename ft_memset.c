/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:41:21 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/04 18:48:16 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef unsigned long long	t_ull;

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
	void		*ptrs;
	ull			cccccccc;

	ptrs = s;
	cccccccc = (unsigned char)c;
	cccccccc |= cccccccc << 8;
	cccccccc |= cccccccc << 16;
	cccccccc |= cccccccc << 32;
	ptrs = (void *)ft_completion((ull *)ptrs, n / 64, cccccccc);
	len = (n % 64) / 8;
	while (len)
	{
		*((ull *)ptrs) = cccccccc;
		ptrs += 8;
		len--;
	}
	len = n % 8;
	while (len--)
	{
		((unsigned char *)ptrs)[0] = (unsigned char)c;
		ptrs++;
	}
	return (s);
}
