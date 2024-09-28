/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:08:34 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:39:29 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (len == 0)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			len --;
			((unsigned char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int main() {
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memmove(dest1, src1, 13);
    printf("After my_memmove: '%s'\n", dest1);

    // Test with overlapping regions
    char buffer[] = "1234567890";
    ft_memmove(buffer + 4, buffer, 6);
    printf("After my_memmove with overlap: '%s'\n", buffer);

    return 0;
}
*/
