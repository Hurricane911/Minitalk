/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:30:17 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:39:12 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*calculate len of n
 *if len of n is -, + 1 to add space
 *if len still exist, divide 10, to get len
 *each len represent space
 *if negative, -- = +
 *take sign
 */
int	absolute_len(int absolute)
{
	int	len;

	len = 0;
	if (absolute < 1)
		len++;
	while (absolute)
	{
		absolute /= 10;
		len++;
	}
	return (len);
}

int	abs_val(int n)
{
	int	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

char	*array(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	absolute;
	int				sign;
	int				len;
	char			*string;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = absolute_len(n);
	string = array(len);
	if (!string)
		return (NULL);
	string[len] = '\0';
	absolute = abs_val(n);
	while (len--)
	{
		string[len] = 48 + absolute % 10;
		absolute /= 10;
	}
	if (sign)
		string[0] = '-';
	return (string);
}
/*
int main()
{
	int num = -134567123;
	char *result = ft_itoa(num);
	
	printf("%s", result);
	return 0;
}
*/
