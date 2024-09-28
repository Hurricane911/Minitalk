/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:00:33 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:40:25 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
int main() {
    // Test cases
    const char *test1 = "Hello";
    const char *test2 = "";
    const char *test3 = "OpenAI";

    printf("strlen_custom(\"%zu\") = %zu\n", test1, ft_strlen(test1));
	printf("strlen_custom(\"%zu\") = %zu\n", test2, ft_strlen(test2));
	printf("strlen_custom(\"%zu\") = %zu\n", test3, ft_strlen(test3));
    return 0;
}
*/
