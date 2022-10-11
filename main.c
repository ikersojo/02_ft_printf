/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:57:29 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/11 19:56:30 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/inc/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	num;
	int	i;
	int	j;

	num = 2147483647;
	i = printf(" c_printf: %d\n", num);
	j = ft_printf("ft_printf: %d\n", num);
	printf(" c: %d\nft: %d\n", i, j);
	return (0);
}
