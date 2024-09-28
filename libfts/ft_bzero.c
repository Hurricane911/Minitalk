/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:57:01 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:38:29 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int main()
{
    char buffer[11] = "hello world";
    printf("Before ft_bzero: %s\n", buffer);
    ft_bzero(buffer, 6);
    printf("After ft_bzero: %s\n", buffer);

	for (int i = 0; i < 11; i++)
	{
		printf("buffer[%d]: %d\n", i, buffer[i]);
    }

	   for (int i = 0; i < 11; i++) 
	   {
       		if (buffer[i] != '\0')
            printf("%c", buffer[i]);
	   }
			return 0;
}
*/
