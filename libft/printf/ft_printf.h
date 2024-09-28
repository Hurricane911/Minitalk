/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:29:27 by joyim             #+#    #+#             */
/*   Updated: 2024/07/01 13:33:48 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_puthexlow(unsigned int n);
int	ft_puthexcap(unsigned int n);
int	ft_putptr(unsigned long nb);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);
int	ft_putnbr(int n);
#endif
