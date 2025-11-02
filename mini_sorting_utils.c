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

void	bring_top_element(int *stack_a, int *index_a, int min_pos)
{
	int	moves_ra;
	int	moves_rra;

	moves_ra = (*index_a) - min_pos;
	moves_rra = min_pos + 1;
	if (moves_ra <= moves_rra)
	{
		while (moves_ra > 0)
		{
			ra(stack_a, index_a);
			moves_ra--;
		}
	}
	else
	{
		while (moves_rra > 0)
		{
			rra(stack_a, index_a);
			moves_rra--;
		}
	}
}

int	find_move_elements_count(int index_a)
{
	if (index_a == 5)
		return (2);
	else if (index_a == 6)
		return (2);
	else if (index_a == 7)
		return (3);
	else if (index_a == 8)
		return (4);
	else if (index_a == 9)
		return (5);
	else if (index_a == 10)
		return (6);
	else
		return (index_a - 4);
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
