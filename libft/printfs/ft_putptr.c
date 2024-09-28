/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:42:14 by joyim             #+#    #+#             */
/*   Updated: 2024/07/01 13:59:56 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long nb)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		len += ft_putptr(nb / 16);
		len += ft_putptr(nb % 16);
	}
	else
	{
		len += ft_putchar(base[nb]);
	}
	return (len);
}
