/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:05:47 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:40:17 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		i;	

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst_len < dstsize && dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len == dstsize)
		return (dst_len + src_len);
	while (i < src_len && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int main() {
    char dest[20] = "Hello";
    const char *source = " World!";
    size_t size = 20;

    size_t result = ft_strlcat(dest, source, size);
    printf("Resulting string: '%s'\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}
*/
