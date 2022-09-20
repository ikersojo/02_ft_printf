/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:43:25 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/20 14:49:51 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

//conversion specifier "cs"
static int	conv_sel(va_list *ap, char cs)
{
	int	count;

	count = 0;
	if (cs == '%')
		count += ft_putchar_fd('%', 1);
	if (cs == 'c')
		count += ft_putchar_fd(va_arg(*ap, int), 1);
	// if (cs == 's')
	// 	count += ft_putstr_fd(va_arg(ap, char *), 1);
	// if (cs == 'd' || cs == 'i')
	// 	count += ft_putnbr_fd(va_arg(ap, int), 1);
	// if (cs == 'p')
	// 	count += ft_putptr_fd(va_arg(ap, ??), 1);
	// if (cs == 'u')
	// 	count += ft_putunbr_fd(va_arg(ap, unsigned int), 1);
	// if (cs == 'x')
	// 	count += ??
	// if (cs == 'X')
	// 	count += ??
	return (count);
}


/* DESCRIPTION:
---------------------------------------------------------------------------- */
int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			//str++;
			count += conv_sel(&ap, *str);
		}
		else
		{
			count += ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(ap);
	return (count);
}




//--------- // DEBUG
#include <stdio.h>
int	main(void)
{
	int		count1;
	int		count2;
	char	*s = "iker";

	printf("%cs%cs%c\n", 'a', 'b', 'a');
	ft_printf("%cs%cs%c\n", 'a', 'b', 'a');

	return (0);
}