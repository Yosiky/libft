/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:40:02 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/14 20:58:49 by eestelle         ###   ########.fr       */
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
			continue ;
		s = ft_strchr(s, c);
		count++;
	}
	return (count);
}

static void	*ft_arrdel(char **arr, size_t len)
{
	while (len--)
		free(arr[len]);
	free(arr);
	return ((void *)0);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**result;
	char	*iter;

	if (!s)
		return ((void *)0);
	count = find_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return ((void *)0);
	result[count] = (char *)0;
	i = 0;
	while (i < count)
	{
		while (*s == c && *s && s != (char *)0)
			s++;
		iter = ft_strchr(s, c);
		result[i] = ft_substr(s, 0, (size_t)iter - (size_t)s);
		if (!result[i++])
			return (ft_arrdel(result, i));
		s = iter;
	}
	return (result);
}
