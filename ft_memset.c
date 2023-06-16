/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:41:21 by eestelle          #+#    #+#             */
/*   Updated: 2023/06/16 15:31:14 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned long long  t_ull;

static  t_ull   *ee_fast_feel_64(t_ull *ptrs, size_t len, t_ull c)
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

static void    ee_fast_feel_array(char *str, size_t n, int c)
{
    size_t      len;
    t_ull       *ptrs;
    t_ull       cccccccc;

    cccccccc = (unsigned char)c;
    cccccccc |= cccccccc << 8;
    cccccccc |= cccccccc << 16;
    cccccccc |= cccccccc << 32;
    ptrs = (t_ull *)str;
    len = n / 64;
    if (len)
        ptrs = ee_fast_feel_64(ptrs, len, cccccccc);
    len = (n % 64) / 8;
    while (len)
    {
        *(ptrs++) = cccccccc;
        len--;
    }
    len = n % 8;
    str = (char *)ptrs;
    while (len--)
        *(str++) = (unsigned char)c;
}

void    *ft_memset(void *s, int c, size_t n)
{
    char        *str;

    str = (char *)s;
    while (((size_t)str % 8) && n)
    {
        *(str++) = (unsigned char)c;
        --n;
    }
    if (n == 0)
        return (s);
    ee_fast_feel_array(str, n, c);
    return (s);
}
