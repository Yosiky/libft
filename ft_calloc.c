/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:06:10 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 17:20:29 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(size * count);
	if (result != (void *)0)
		ft_memset(result, 0, count * size);
	return (result);
}
