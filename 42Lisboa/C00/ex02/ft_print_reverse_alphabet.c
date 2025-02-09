/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:08:49 by daneto            #+#    #+#             */
/*   Updated: 2025/02/01 11:49:55 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = ;
	while (z >= 48)
	{
		write(1, &z, 1);
		z--;
	}
}


int main ()
{
	ft_print_reverse_alphabet();
	return (0);
}
