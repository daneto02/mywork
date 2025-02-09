/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:02:23 by daneto            #+#    #+#             */
/*   Updated: 2025/01/30 16:08:16 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	res;

	res = 0;
	while ((*s1 != '\0' || *s2 != '\0') && res == 0)
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return (res);
}
/*#include <stdio.h>
int main()
{
	char s1[] ="abcd";
	char s2[] ="abc";  
	int res  = ft_strcmp(s1, s2);
	printf("res: %i\n", res);
}*/