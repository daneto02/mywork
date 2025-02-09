/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:28:03 by daneto            #+#    #+#             */
/*   Updated: 2025/01/27 11:58:02 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	h;
	int	j;

	h = *a;
	j = *b;
	*a = h / j;
	*b = h % j;
}

/*#include <stdio.h>
int main ()
{
	int h = 10;
	int j = 4;
	
	ft_ultimate_div_mod(&h, &j);
	printf("div: %i\n", h);
	printf("mod: %i\n", j);
	return(0);
}*/
