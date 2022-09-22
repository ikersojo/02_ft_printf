/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:27:38 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/22 10:29:18 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	ft_putchar_fd(int c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return (write(fd, "(null)", 6));
	i = 0;
	while (*s)
		i += ft_putchar_fd(*s++, fd);
	return (i);
}

int	ft_digitcount(unsigned long n, int base)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n > 0)
	{
		i++;
		n = n / base;
	}
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	if (n < 0)
		ft_putchar_fd('-', fd);
	if (ft_abs(n) >= 0 && ft_abs(n) <= 9)
		ft_putchar_fd(ft_abs(n) + '0', fd);
	else
	{
		ft_putnbr_fd(ft_abs(n / 10), fd);
		ft_putnbr_fd(ft_abs(n % 10), fd);
	}
	if (n == -2147483648)
		return (11);
	i = ft_digitcount(ft_abs(n), 10);
	if (n < 0)
		i++;
	return (i);
}
