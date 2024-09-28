/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:14:50 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:40:08 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	to_upper_if_even(unsigned int index, char *c)
{
    if (index % 2 == 0) {
        *c = toupper(*c); // Convert to uppercase if the index is even
    }
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !(*s) || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
/*
int main()
{
	char str[] = "hello";

	ft_striteri(str, to_upper_if_even);
        printf("Original: %s\n", str);
	return 0;
}
*/
