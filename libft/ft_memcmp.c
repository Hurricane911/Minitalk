/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:59:37 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 21:24:02 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	size_t					i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i] || str1 == NULL || str2 == NULL)
		{
			return ((int)(str1[i] - str2[i]));
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[4] = "what";
	char s2[4] = "whau";

	int result = ft_memcmp(s1, s2, 4);

	printf("%d", result);

	return 0;
}
*/
