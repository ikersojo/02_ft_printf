/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:49:09 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/04 09:53:48 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/inc/libft.h"
#include "ft_printf.h"

static int	ft_putptr_fd(uintptr_t n, int fd)
{
	int	i;

	i = 0;
	i += ft_putstr_fd("0x", fd);
	if (n == 0)
		i += ft_putchar_fd('0', fd);
	else
		i += ft_putuhexlongnbr_fd(n, fd, 'x');
	return (i);
}

//conversion specifier "cs"
static int	conv_sel(va_list ap, char cs)
{
	int	count;

	count = 0;
	if (cs == '%')
		count += ft_putchar_fd('%', 1);
	if (cs == 'c')
		count += ft_putchar_fd(va_arg(ap, int), 1);
	if (cs == 's')
		count += ft_putstr_fd(va_arg(ap, char *), 1);
	if (cs == 'd' || cs == 'i')
		count += ft_putnbr_fd(va_arg(ap, int), 1);
	if (cs == 'p')
		count += ft_putptr_fd(va_arg(ap, uintptr_t), 1);
	if (cs == 'u')
		count += ft_putunbr_fd(va_arg(ap, unsigned int), 1);
	if (cs == 'x' || cs == 'X')
		count += ft_putuhexnbr_fd(va_arg(ap, int), 1, cs);
	return (count);
}

/* DESCRIPTION:
The printf utility exits 0 on success, and >0 if an error occurs.
The printf utility formats and prints its arguments, after the first, under
control of the format specified by cs (conversion specifier).
---------------------------------------------------------------------------- */
int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, str);
	if (str == NULL)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			if (!(*(str + 1)) || !ft_ischarset(*(str + 1), "%csdiupxX"))
				return (-1);
			count += conv_sel(ap, *(str + 1));
			str++;
		}
		else if (ft_isascii(*str))
			count += ft_putchar_fd(*str, 1);
		else
			return (-1);
		str++;
	}
	va_end(ap);
	return (count);
}
