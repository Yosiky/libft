/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:06:10 by eestelle          #+#    #+#             */
/*   Updated: 2023/06/16 15:54:02 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *result;
    register size_t size_array = count * size;

    if (count && size_array / count != size)
        return (NULL);
    result = malloc(size_array);
    if (result != NULL)
        ft_memset(result, 0, size_array);
    return (result);
}
