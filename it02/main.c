/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:51:57 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 11:38:03 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/inc/libft.h"
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	num;

	num = 0;
	i = ft_printf("%d\n", num);
	j = printf("%d\n", num);
	printf("%d - %d", i, j);
}
