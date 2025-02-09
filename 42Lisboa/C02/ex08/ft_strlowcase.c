/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:08:50 by daneto            #+#    #+#             */
/*   Updated: 2025/01/28 14:10:49 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
	}
	return (start);
}
/*#include <stdio.h>
int main()
{
	char str[] ="HELLO";
	char *i = ft_strlowcase(str);
	printf("%s", i);
}*/