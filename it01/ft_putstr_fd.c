/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:25:06 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:25:06 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* DESCRIPTION:
Outputs the string s to the file descriptor fd.
The function returns the number of characters printed.
---------------------------------------------------------------------------- */
int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*(s + i))
		ft_putchar_fd(*(s + i++), fd);
	return (i);
}
