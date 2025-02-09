/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:16:30 by daneto            #+#    #+#             */
/*   Updated: 2025/02/03 17:08:24 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
/* int main()
{
    unsigned int num = 0;
    char source[] = "Hello, world!";
    char destination[50];
    ft_strncpy(destination, source, num);
    write(1, "Source: ", 8);
    write(1, source, 5);
    write(1, "\n", 1);
    write(1, "Destination: ", 12);
    write(1, destination, 5);
    write(1, "\n", 1);
    return 0;
} */