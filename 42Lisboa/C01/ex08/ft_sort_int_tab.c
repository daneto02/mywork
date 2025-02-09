/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:44:30 by daneto            #+#    #+#             */
/*   Updated: 2025/01/27 15:23:29 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	step;
	int	temp;

	i = 0;
	step = 0;
	size -= 1;
	while (step < size)
	{
		i = 0;
		while (i < size - step)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		step++;
	}
}

/*#include <stdio.h>

int main(void)
{
	int tab[] = {20, 5, 70, 15, 3};
	int len = 5;
	ft_sort_int_tab(tab, len);
	int i = 0;

	while (i < 5)
	{
		printf("%i ", tab[i++]);
	}
	return (0);
}*/