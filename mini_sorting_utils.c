/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sorting_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:35:52 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 14:01:14 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_remaining_elements(int *stack_a, int index_a, int remaining)
{
	if (remaining == 2)
		two_elements_sorting(stack_a, index_a);
	else if (remaining == 3)
		three_elements_sorting(stack_a, index_a);
}

void	bring_top_element(int *stack_a, int index_a, int min_pos)
{
	while (min_pos != index_a)
	{
		if (min_pos > (index_a / 2))
			ra(stack_a, index_a);
		else
			rra(stack_a, index_a);
		min_pos = find_min_pos(stack_a, index_a);
	}
}

void	find_move_elements_count(int index_a, int move_elements_count)
{
	if (index_a <= 5)
		move_elements_count = 2;
	else if (index_a <= 7)
		move_elements_count = 2;
	else
		move_elements_count = 3;
}

int	find_min_pos(int *stack_a, int index_a)
{
	int	temp;
	int	pos;

	pos = index_a;
	temp = stack_a[index_a];
	while (index_a >= 0)
	{
		if (temp > stack_a[index_a])
		{
			temp = stack_a[index_a];
			pos = index_a;
		}
		index_a--;
	}
	return (pos);
}
