/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:40:02 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/14 18:40:04 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s != (void *)0 && *s)
	{
		while (*s == c)
			s++;
        if (!(*s))
            continue;
        s = ft_strchr(s, c);
		count++;
	}
	return (count);
}

static void ft_arrdel(char **arr, size_t len)
{
    while (len--)
        free(arr[len]);
    free(arr);
}


char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	len;
	char	**result;
	char	*iter;

    if (!s)
        return ((void *)0);
	i = 0;
	count = find_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
    if (!result)
        return ((void *)0);
	result[count] = (char *)0;
	while (i < count)
	{
		while (*s == c && *s && s != (char *)0)
			s++;
		iter = ft_strchr(s, c);
		if (iter == (char *)0)
			result[i++] = ft_strdup(s);
		else
		{
			len = (size_t)iter - (size_t)s;
			result[i] = (char *)malloc(sizeof(char) * (len + 1));
            if (!result[i])
            {
                ft_arrdel(result, i + 1);
                return ((void *)0);
            }
			ft_strlcpy(result[i], s, len + 1);
			result[i++][len] = '\0';
			s = iter;
		}
	}
	return (result);
}
