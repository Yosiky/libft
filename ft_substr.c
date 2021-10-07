/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:40:51 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 18:05:11 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_str;
	char	*result;

	len_str = ft_strlen(s + start);
	if (len_str > len)
		len_str = len;
	result = (char *)malloc(sizeof(char) * (++len_str));
	if (result == (void *)0)
		return (result);
	ft_strlcpy(result, s + start, len_str);
	return (result);
}
