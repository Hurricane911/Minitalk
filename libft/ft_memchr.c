/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:56:50 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:39:16 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;
	size_t					i;

	i = 0;
	str = (const unsigned char *)s;
	if (n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (str[i] == (const unsigned char) c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char *test_str = "Hello, World!";
    char target_char = 'o';

    // Call ft_memchr with the correct number of bytes to scan
    char *result = (char *)ft_memchr(test_str, target_char, 13);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", 
		target_char, result - test_str);
    } else {
        printf("Character '%c' not found.\n", target_char);
    }

    return 0;
}
*/
