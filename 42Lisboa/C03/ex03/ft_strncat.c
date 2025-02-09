/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:22:35 by daneto            #+#    #+#             */
/*   Updated: 2025/02/01 11:46:53 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	counter;

	counter = 0;
	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src != '\0' && counter < nb)
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	*dest = '\0';
	return (start);
}
// #include <stdio.h>
// int main()
// {
// 	char dest[50]="Hello";
// 	char src[]= " Guys";
// 	char *start= ft_strncat(dest, src, 3);
// 	printf("res: %s\n", start);
// }