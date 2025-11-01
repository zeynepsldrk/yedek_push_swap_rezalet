/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:26:01 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 16:07:34 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	copy_array(int *copy, int *stack_a, int index_a)
{
	int	i;

	i = 0;
	while (i <= index_a)
	{
		copy[i] = stack_a[i];
		i++;
	}
}

void	index_stack(int *stack_a, int index_a)
{
	int	*copy;
	int	i;
	int	j;
	int	rank;

	copy = open_heap((index_a + 2));
	copy_array(copy, stack_a, index_a);
	i = 0;
	while (i <= index_a)
	{
		rank = 0;
		j = 0;
		while (j <= index_a)
		{
			if (copy[j] < copy[i])
				rank++;
			j++;
		}
		stack_a[i] = rank;
		i++;
	}
	free(copy);
}

int	find_max_bit(int *stack_a, int index_a)
{
	int	max_rank;
	int	max_bit;

	max_bit = 0;
	max_rank = find_max_rank(stack_a, index_a);
	while (max_rank > 0)
	{
		max_rank = max_rank >> 1;
		max_bit++;
	}
	return (max_bit);
}

int	find_max_rank(int *stack_a, int index_a)
{
	int	i;
	int	max_rank;

	i = 0;
	while (i <= index_a)
	{
		if (stack_a[i] > max_rank)
			max_rank = stack_a[i];
		i++;
	}
	return (max_rank);
}
