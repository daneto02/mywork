/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:33:02 by daneto            #+#    #+#             */
/*   Updated: 2025/02/02 18:41:53 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	return (nb * ft_recursive_power (nb, power - 1));
}
/* 
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(5, 3));
} */