/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:56:20 by daneto            #+#    #+#             */
/*   Updated: 2025/02/04 17:05:46 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	while (**argv)
	{
		write (1, *argv, 1);
		(*argv)++;
	}
	write (1, "\n", 1);
	return (argc);
}
// [mem1, mem2, mem3]

// mem 1 = "a.out"
// mem2 = "one"
// mem3 = "two"
