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

#include "../inc/libft.h"

/* DESCRIPTION:
Outputs the integer n to the file descrptor fd.
---------------------------------------------------------------------------- */
size_t	ft_putnbr_fd(int n, int fd)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i++;
	}
	if (ft_abs(n) >= 0 && ft_abs(n) <= 9)
	{
		ft_putchar_fd(ft_abs(n) + '0', fd);
		i++;
	}
	else
	{
		ft_putnbr_fd(ft_abs(n / 10), fd);
		ft_putnbr_fd(ft_abs(n % 10), fd);
	}
	return (i);
}
