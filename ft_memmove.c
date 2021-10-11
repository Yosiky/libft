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

typedef	unsigned long long	t_ull;

void	*ft_memcpy(void *dest, const void *src, size_t len);

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest == (void *)0 && src == (void *)0)
		return ((void *)0);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		while (len--)
			((char *)dest)[len] = ((char *)src)[len];
	}
	return (dest);
}
