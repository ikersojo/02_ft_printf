/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexlongnbr_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:38:26 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/22 08:57:04 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Outputs the unisgned long n to the file descriptor fd in hexadecimal.
The function returns the number of characters printed.
---------------------------------------------------------------------------- */
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
