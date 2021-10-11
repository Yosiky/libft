/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:07:11 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/07 17:07:13 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef	unsigned long long	t_ull;

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_ull	*ptr_s1;
	t_ull	*ptr_s2;
	char	*bptr_s1;
	char	*bptr_s2;
	size_t	len;

	if (!n)
		return (0);
	ptr_s1 = (t_ull *)s1;
	ptr_s2 = (t_ull *)s2;
	len = n / 8;
	while (len--)
	{
		if (*ptr_s1 != *ptr_s2)
			break;
		ptr_s1++;
		ptr_s2++;
	}
	bptr_s1 = (char *)ptr_s1;
	bptr_s2 = (char *)ptr_s2;
	len = (len + 1) * 8 + n % 8;
	while (len)
	{
		len--;
		if (*bptr_s1 != *bptr_s2)
			return (*((unsigned char *)bptr_s1) - *((unsigned char *)bptr_s2));
		bptr_s1++;
		bptr_s2++;
	}
	if (!len)
		return (0);
	return (*((unsigned char *)bptr_s1 - *((unsigned char *)bptr_s2)));
}
