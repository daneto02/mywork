/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:53:17 by daneto            #+#    #+#             */
/*   Updated: 2025/01/27 15:39:11 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int tab[] = {0, 1, 4, 5, 7};
	int i = 0;
	int size = 5;
	ft_rev_int_tab(tab, size);
	
	while(i < 5)
	{
		printf("%i", tab [i++]);
	}

	return (0);
}*/
