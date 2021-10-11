/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:36:39 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/04 19:57:29 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memchr(const void *s, int c, size_t n);

size_t	ft_strlen(const char *s)
{
	return ((size_t)ft_memchr(s, '\0', -1) - (size_t)s);
}
