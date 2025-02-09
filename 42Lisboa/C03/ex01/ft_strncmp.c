/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:50:50 by daneto            #+#    #+#             */
/*   Updated: 2025/01/30 16:08:31 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				res;
	unsigned int	counter;

	counter = 0;
	res = 0;
	while ((*s1 != '\0' || *s2 != '\0') && res == 0 && counter < n)
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
		}
		s1++;
		s2++;
		counter++;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	char s1[] ="k7k";
	char s2[] ="k7l";  
	int res  = ft_strncmp(s1, s2, 3);
	printf("res: %i\n", res);	
}*/