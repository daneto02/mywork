/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:37:57 by daneto            #+#    #+#             */
/*   Updated: 2025/01/28 12:39:27 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 65 && *str <= 90))
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
	int i = ft_str_is_uppercase(str);
	printf("%i", i);
}*/