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

#include "libft.h"

/* DESCRIPTION:
Outputs the string s to the file descriptor fd.
The function returns the number of characters printed and -1 if fails to print.
---------------------------------------------------------------------------- */
int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	if (s == NULL)
		return (write(fd, "(null)", 6));
	while (*s)
	{
		temp = ft_putchar_fd(*s++, fd);
		if (temp == -1)
			return (-1);
		i += temp;
	}
	return (i);
}
