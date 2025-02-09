/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:34:12 by daneto            #+#    #+#             */
/*   Updated: 2025/01/27 11:26:55 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int	main()
{
	int a = 80;
	int b = 56;
	ft_swap(&a, &b);
	printf ("int a %i\n", a);
	printf ("int b %i\n", b);
	return (0);
}*/