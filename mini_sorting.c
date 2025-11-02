/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:56 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 14:53:01 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_elements_sorting(int *stack_a, int *index_a)
{
	if (stack_a[*index_a] > stack_a[*index_a - 1])
		sa(stack_a, index_a);
}

void	three_elements_sorting(int *stack_a, int *index_a)
{
	int	top;
	int	second;
	int	third;

	top = stack_a[*index_a];
	second = stack_a[*index_a - 1];
	third = stack_a[*index_a - 2];
	if (top > second && second > third)
    {
        sa(stack_a, index_a);
        rra(stack_a, index_a);
    }
	else if (top > second && second < third)
        sa(stack_a, index_a);
	else if (top > second && top > third && second < third)
		ra(stack_a, index_a);
	else if (top < second && top > third)
		rra(stack_a, index_a);
    else if (top < second && second > third && top < third)
    {
        sa(stack_a, index_a);
        ra(stack_a, index_a);
    }
}

void	four_elements_sorting(int *stack_a, int *stack_b,
			int *index_a, int *index_b)
{
	int	min_pos;

	if (((*index_a) + 1) == 4)
	{
		min_pos = find_min_pos(stack_a, *index_a);
		bring_top_element(stack_a, index_a, min_pos);
		pb(stack_a, stack_b, index_a, index_b);
		three_elements_sorting(stack_a, index_a);
		pa(stack_a, stack_b, index_a, index_b);
	}
}

void	small_elements_sorting(int *stack_a, int *stack_b,
			int *index_a, int *index_b)
{
	int	min_pos;
	int	move_elements_count;
	int	remaining;

	move_elements_count = find_move_elements_count((*index_a) + 1);
	remaining = ((*index_a) + 1) - move_elements_count;
	while (move_elements_count > 0)
	{
		min_pos = find_min_pos(stack_a, *index_a);
		bring_top_element(stack_a, index_a, min_pos);
		pb(stack_a, stack_b, index_a, index_b);
		move_elements_count--;
	}
	sort_remaining_elements(stack_a, index_a, remaining);
	if (remaining == 4)
		four_elements_sorting(stack_a, stack_b, index_a, index_b);
	while (*index_b >= 0)
		pa(stack_a, stack_b, index_a, index_b);
}
