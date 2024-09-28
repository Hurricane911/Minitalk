/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:57:47 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 21:26:28 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlen(const char *s)
{
	size_t		len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
*/
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int main() {
    char original[] = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    // Free the allocated memory for the duplicate string
    free(duplicate);

    return 0;
}
*/
