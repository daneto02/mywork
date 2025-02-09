/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:04:49 by daneto            #+#    #+#             */
/*   Updated: 2025/01/28 14:10:50 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (start);
}
/*#include <stdio.h>
int main()
{
	char str[] ="hello";
	char *i = ft_strupcase(str);
	printf("%s", i);
}*/