/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:58:32 by daneto            #+#    #+#             */
/*   Updated: 2025/01/31 12:21:19 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		counter = 0;
		while (*(str + counter) == to_find[counter])
		{
			if (to_find[counter + 1] == '\0')
			{
				return (str);
			}
			counter++;
		}
		str++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char *str= "Hello 42";
	char *to_find= "ASD";
	char *res = ft_strstr(str, to_find);
	printf("res: %s", res);
	
}*/