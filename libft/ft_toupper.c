/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:11:55 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:41:02 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
int main() {
    const char *test_str = "Hello, World!";
    char converted_str[50]; // Ensure this is large enough for your test cases
    int i = 0;

    // Convert the string using my_toupper
    while (test_str[i] != '\0') {
        converted_str[i] = ft_toupper(test_str[i]);
        i++;
    }
    converted_str[i] = '\0'; // Null-terminate the string

    printf("Original string: %s\n", test_str);
    printf("Converted string: %s\n", converted_str);

    return 0;
}
*/
