/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:44:13 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/04 20:01:31 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef	unsigned long long	t_ull;

static t_ull	*ft_completion(t_ull *dest, t_ull **src, size_t len)
{
	while (len--)
	{
		dest[0] = (*src)[0]; 
		dest[1] = (*src)[1]; 
		dest[2] = (*src)[2]; 
		dest[3] = (*src)[3]; 
		dest[4] = (*src)[4]; 
		dest[5] = (*src)[5]; 
		dest[6] = (*src)[6]; 
		dest[7] = (*src)[7]; 
		dest += 8;
		*src += 8;
	}
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	t_ull	*ptr_dest;
	t_ull	*ptr_src;
	char	*bptr_dest;
	char	*bptr_src;
	size_t	len;

	if (dest == src || n == 0)
		return (dest);
	bptr_dest = (char *)dest;
	bptr_src = (char *)src;
	while ((size_t)bptr_dest % 8 && n--)
		*(bptr_dest++) = *(bptr_src++);
    if ((n + 1) == 0)
        return (dest);
    ptr_dest = (t_ull *)bptr_dest;
	ptr_src = (t_ull *)bptr_src;
	len = (n) / 64;
	if (len)
		ptr_dest = ft_completion(ptr_dest, &ptr_src, len); 
	len = (n % 64) / 8;
	while (len--)
		*(ptr_dest++) = *(ptr_src++);
	bptr_dest = (char *)ptr_dest;
	bptr_src = (char *)ptr_src;
	len = n % 8;
	while (len--)
		*(bptr_dest++) = *(bptr_src++);
	return (dest);
}
