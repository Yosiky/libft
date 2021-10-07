/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:10:18 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 14:45:03 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && *dst)
	{
		dst++;
		i++;
	}
	while (i < dstsize - 1 && *src)
	{
		*(dst++) = *(src++);
		i++;
	}
	dst[i] = '\0';
	while (*(src++))
		i++;
	return (i);
}
