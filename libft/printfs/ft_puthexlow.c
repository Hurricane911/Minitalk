/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:42:00 by joyim             #+#    #+#             */
/*   Updated: 2024/07/01 13:47:34 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned int n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		len += ft_puthexlow(n / 16);
		len += ft_puthexlow(n % 16);
	}
	else
	{
		ft_putchar(base[n]);
		len++;
	}
	return (len);
}
/*
int main()
{
    int hex = 1234;
    int result = ft_puthexlow(hex, 'X');
    printf("\n%d\n", result);
}
*/
