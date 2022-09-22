/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:29:10 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/22 10:12:11 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putunbr_fd(n / 10, fd);
		ft_putunbr_fd(n % 10, fd);
	}
	return (ft_digitcount(n, 10));
}

int	ft_putuhexnbr_fd(unsigned int n, int fd, char cs)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	else if (n >= 10 && n <= 15)
	{
		if (cs == 'X')
			ft_putchar_fd(n - 10 + 'A', fd);
		else
			ft_putchar_fd(n - 10 + 'a', fd);
	}
	else
	{
		ft_putuhexnbr_fd(n / 16, fd, cs);
		ft_putuhexnbr_fd(n % 16, fd, cs);
	}
	return (ft_digitcount(n, 16));
}

int	ft_putuhexlongnbr_fd(unsigned long n, int fd, char cs)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	else if (n >= 10 && n <= 15)
	{
		if (cs == 'X')
			ft_putchar_fd(n - 10 + 'A', fd);
		else
			ft_putchar_fd(n - 10 + 'a', fd);
	}
	else
	{
		ft_putuhexlongnbr_fd(n / 16, fd, cs);
		ft_putuhexlongnbr_fd(n % 16, fd, cs);
	}
	return (ft_digitcount(n, 16));
}

int	ft_putptr_fd(uintptr_t n, int fd)
{
	int	i;

	i = 0;
	i += ft_putstr_fd("0x", fd);
	if (n == 0)
		i += ft_putchar_fd('0', fd);
	else
		i += ft_putuhexlongnbr_fd(n, fd, 'x');
	return (i);
}
