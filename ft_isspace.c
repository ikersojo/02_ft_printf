/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:48:11 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/17 11:53:17 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isspace() function tests for the white-space characters.  For any locale,
this includes the following standard characters:

					``\t''``\n''``\v''``\f''``\r''`` ''

The isspace() function returns zero if the character tests false and returns
non-zero if the character tests true.
---------------------------------------------------------------------------- */
int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
