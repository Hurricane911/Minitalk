/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:16:45 by joyim             #+#    #+#             */
/*   Updated: 2024/06/24 19:38:22 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	char input;
	printf("enter");
	scanf("%c", &input);

	if(ft_isalnum(input))
	{
		printf("%c is an alphabet", input);
	}
	else
	{
		printf("%c is not an alphanumerical", input);
	}
	return 0;
}
*/
