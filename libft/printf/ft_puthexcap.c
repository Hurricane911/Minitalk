/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexcap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:41:43 by joyim             #+#    #+#             */
/*   Updated: 2024/07/01 13:48:57 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexcap(unsigned int n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		len += ft_puthexcap(n / 16);
		len += ft_puthexcap(n % 16);
	}
	else
	{
		ft_putchar(base[n]);
		len ++;
	}
	return (len);
}
