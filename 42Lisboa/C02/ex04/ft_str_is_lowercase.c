/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:27:05 by daneto            #+#    #+#             */
/*   Updated: 2025/01/28 12:37:07 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 97 && *str <= 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char str[] ="";
	int i = ft_str_is_lowercase(str);
	printf("%i", i);
}*/