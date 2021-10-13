/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:39:25 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 17:07:38 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (len-- && *haystack && needle[i])
	{
		if (*haystack == needle[i])
			i++;
		else
			i = 0;
		haystack++;
	}
	if (needle[i] != '\0')
		return ((void *)0);
	return ((char *)haystack - i);
}
