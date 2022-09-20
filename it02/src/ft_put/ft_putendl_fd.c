/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:24:36 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:24:36 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/* DESCRIPTION:
Outputs the string s to the file descriptor fd followed by a ’\n’.
The function returns the number of characters printed.
---------------------------------------------------------------------------- */
size_t	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (i + 1);
}
