/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:06 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/22 09:41:30 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_abs(int n);
int	ft_putchar_fd(int c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_digitcount(unsigned long n, int base);
int	ft_putnbr_fd(int n, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);
int	ft_putuhexnbr_fd(unsigned int n, int fd, char cs);
int	ft_putuhexlongnbr_fd(unsigned long n, int fd, char cs);
int	ft_putptr_fd(uintptr_t n, int fd);
int	ft_isascii(int c);
int	ft_ischarset(char c, const char *set);

#endif
