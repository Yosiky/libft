/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:03:41 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 13:35:50 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;

	ptr_dst = dst;
	if (dst < src)
	{
		while (len--)
			*(ptr_dst++) = *((char *)src++);
	}
	else
	{
		while (len--)
			ptr_dst[len] = ((char *)src)[len];
	}
	return (dst);
}
