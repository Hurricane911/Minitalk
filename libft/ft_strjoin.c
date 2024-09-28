/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:53:28 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 21:42:56 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	size_t	total;

	total = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * total + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		ptr[i++] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i++] = s2[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	char *str = "Hello, World";
	char *str2 = "Hello";
	char *result = ft_strjoin(str, str2);
	printf("%s", result);

	free(result);

	return 0;
}
*/
