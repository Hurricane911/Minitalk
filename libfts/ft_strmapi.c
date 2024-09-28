/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:18:11 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:40:31 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char to_upper_if_even(unsigned int index, char c) 
{
    if (index % 2 == 0) {
        return toupper(c); // Convert to uppercase if the index is even
    }
    return c;
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *str = "hello";
	char *result = ft_strmapi(str, to_upper_if_even);
if (result) {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        free(result);
    }	
	return 0;
}
*/
