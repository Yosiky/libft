/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:23:49 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 12:27:25 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef	unsigned long long	t_ull;

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*bptr;
	size_t	len;
	
	bptr = (char *)s;
	while ((size_t)bptr % 8 && n--)
		if (*(bptr++) == (char)c)
			return ((void *)bptr - 1);
	len = (++n) / 8;
	while (len--)
	{
		if (bptr[0] == (char)c)
			return ((void *)bptr);
		else if (bptr[1] == (char)c)
			return ((void *)bptr + 1);
		else if (bptr[2] == (char)c)
			return ((void *)bptr + 2);
		else if (bptr[3] == (char)c)
			return ((void *)bptr + 3);
		else if (bptr[4] == (char)c)
			return ((void *)bptr + 4);
		else if (bptr[5] == (char)c)
			return ((void *)bptr + 5);
		else if (bptr[6] == (char)c)
			return ((void *)bptr + 6);
		else if (bptr[7] == (char)c)
			return ((void *)bptr + 7);
		bptr += 8;
	}
	len = n % 8;
	while ((size_t)bptr % 8 && n--)
		if (*(bptr++) == (char)c)
			return ((void *)bptr - 1);
	return ((void *)0);
	/*
	char	*ptr;

	ptr = (char *)s;
	while (n--)
		if (*(ptr) == c)
			return ((void *)ptr);
		else
			ptr++;
	return ((void *)0);
	*/
}
