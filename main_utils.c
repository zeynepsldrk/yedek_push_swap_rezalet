/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:08:21 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/02 16:53:34 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *stack_a, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		if ((stack_a[i] > stack_a[i - 1]))
			return (0);
		i--;
	}
	return (1);
}

void	fill_stack_a(int *stack_a, char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (i < ac)
	{
		stack_a[j] = ft_atoi(av[i]);
		i++;
		j--;
	}
}

int	*open_heap(int ac)
{
	int	*stack;

	stack = (int *)malloc(ac * sizeof(int));
	if (!stack)
		print_error();
	return (stack);
}

int	find_arg_count(char **string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}
