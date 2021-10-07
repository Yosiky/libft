/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:07:18 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 17:07:21 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && *s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}