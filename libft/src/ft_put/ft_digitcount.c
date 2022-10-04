/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:25:59 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/22 08:57:04 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The function returns the number of digits in an unsigned long in a given
base length.
---------------------------------------------------------------------------- */
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
