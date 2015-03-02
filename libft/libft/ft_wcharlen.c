/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vame <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 15:53:55 by vame              #+#    #+#             */
/*   Updated: 2015/01/19 16:18:44 by vame             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_wcharlen(wchar_t c)
{
	int			len;

	len = 0;
	if (c <= 0x7F)
		len++;
	else if (c > 0x10FFFF)
		return (-1);
	else
		while (c && ++len > 0)
			c = c >> 6;
	return (len);
}
