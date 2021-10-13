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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_str;
	char	*result;

	len_str = ft_strlen(s);
	if (start > len_str)
		start = len_str;
	if (len_str - start > len)
		len_str = len;
	else
		len_str = len_str - start;
	result = (char *)malloc(sizeof(char) * (len_str + 1));
	if (result == (void *)0)
		return (result);
	ft_strlcpy(result, s + start, len_str + 1);
	return (result);
}
