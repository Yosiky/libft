/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:22:11 by eestelle          #+#    #+#             */
/*   Updated: 2021/10/14 20:26:44 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	g_fd;

static	void	rec(long long n)
{
	char	sym;

	if (!n)
		return ;
	rec(n / 10);
	sym = '0' + n % 10;
	write(g_fd, &sym, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	sign;

	sign = 1;
	g_fd = fd;
	if (n < 0)
	{
		write(fd, "-", 1);
		sign = -1;
	}
	else if (n == 0)
		write(fd, "0", 1);
	rec((long long)n * sign);
}
