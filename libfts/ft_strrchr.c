/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:33:18 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:40:46 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last = ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (last);
}
/*
int main() {
    const char *test_str = "Hello, World!";
    char target_char = 'o';

    char *result = ft_strrchr(test_str, target_char);

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
