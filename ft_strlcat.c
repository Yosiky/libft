/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:10:18 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 17:02:41 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst + 1 >= dstsize)
		return (dstsize + len_src);
	else
	{
		if (len_dst + len_src + 1 >= dstsize)
		{
			ft_strlcpy(dst + len_dst, src, dstsize - len_dst + 1);
			dst[dstsize - 1] = '\0';
		}
		else
		{
			ft_strlcpy(dst + len_dst, src, len_src + 1);
			dst[len_dst + len_src] = '\0';
		}
		return (len_dst + len_src);
	}
}
