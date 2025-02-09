/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:21:12 by daneto            #+#    #+#             */
/*   Updated: 2025/01/29 14:17:58 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
		write (1, &result, 1);
	}
	else
	{
		result = 'P';
		write (1, &result, 1);
	}
}
/*
int	main(void)
{
	int num;
	num = -4;
	ft_is_negative(num);
	return (0);

}*/
