/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:57:10 by daneto            #+#    #+#             */
/*   Updated: 2025/01/30 14:44:53 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

/*#include <stdio.h>
int main()
{
	char src[] ="Hello!";
	char dest[30];
	char *changed = ft_strcpy(dest, src);
	printf("1st Phrase: %s\n", src);
	printf("copied Phrase: %s\n", changed);
}*/