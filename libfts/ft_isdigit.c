/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:05:43 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:39:03 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	char test;
	printf("enter char");
	scanf("%c", &test);

	if(ft_isdigit(test))
	{
		printf("%c is digit", test);
	}
	else
	{
		printf("%c is not digit", test);
	}
	return 0;
}
*/
