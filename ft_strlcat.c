/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:10:18 by eestelle          #+#    #+#             */
/*   Updated: 2023/06/16 19:09:09 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  len_dst;
    size_t  len_src;
    size_t  ans;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (dstsize <= len_dst)
        return (dstsize + len_src);
    ans = len_dst + len_src;
    len_src = len_src < dstsize - len_dst - 1? len_src + 1 : dstsize - len_dst;
    ft_strlcpy(dst + len_dst, src, len_src);
    return (ans);
}
