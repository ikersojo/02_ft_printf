/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:24:48 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:24:48 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Outputs the integer n to the file descriptor fd.
The function returns the number of characters printed.
---------------------------------------------------------------------------- */
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
