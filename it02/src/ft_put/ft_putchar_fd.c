/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:24:26 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:24:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/* DESCRIPTION:
Outputs the char c to the file descriptor fd.
The function returns the number of characters printed.
---------------------------------------------------------------------------- */
size_t	ft_putchar_fd(int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
