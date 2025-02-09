/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:57:43 by daneto            #+#    #+#             */
/*   Updated: 2025/01/27 11:26:56 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int main()
{
	int a = 14;
	int b = 4;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("div: %i\n", div);
	printf("mod: %i\n", mod);
	return (0);
}*/