/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:00:26 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 13:44:27 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	boss_sorting(int *stack_a, int *stack_b, int index_a, int index_b)
{
	int	max_bit;
	int	current_bit;
	int	len;

	max_bit = find_max_bit(stack_a, index_a);
	current_bit = 0;
	while (current_bit < max_bit)
	{
		len = index_a;
		while (len >= 0)
		{
			if (((stack_a[len] >> current_bit) & 1) == 1)
				ra(stack_a, index_a);
			else
				pb(stack_a, stack_b, index_a, index_b);
			len--;
		}
		while (index_b >= 0)
			pa(stack_a, stack_b, index_a, index_b);
		current_bit++;
	}
}
