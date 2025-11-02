/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_func.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:58:44 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 16:29:17 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *stack_a, int *index_a)
{
	int	temp;
	int	i;

	if (*index_a <= 0)
		return ;
	temp = stack_a[0];
	i = 0;
	while (i < *index_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[*index_a] = temp;
	write(1, "rra\n", 4);
}

void	rrb(int *stack_b, int *index_b)
{
	int	temp;
	int	i;

	if (*index_b <= 0)
		return ;
	temp = stack_b[0];
	i = 0;
	while (i < *index_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*index_b] = temp;
	write(1, "rrb\n", 4);
}

void	rrr(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	rra(stack_a, index_a);
	rra(stack_b, index_b);
	write(1, "rrr\n", 4);
}
