/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:26:18 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:40:00 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int main() {
    const char *test_str = "Hello, World!";
    char target_char = '\0';

    char *result = ft_strchr(test_str, target_char);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n",
	   	target_char, result - test_str);
    } 
	else {
        printf("Character '%c' not found.\n", target_char);
    }
    return 0;
}
*/
