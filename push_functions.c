/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:58:40 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/02 16:54:31 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	if (*index_b == -1)
		return ;
	(*index_a)++;
	stack_a[*index_a] = stack_b[*index_b];
	stack_b[*index_b] = 0;
	(*index_b)--;
	write(1, "pa\n", 3);
}

void	pb(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	if (*index_a == -1)
		return ;
	(*index_b)++;
	stack_b[*index_b] = stack_a[*index_a];
	stack_a[*index_a] = 0;
	(*index_a)--;
	write(1, "pb\n", 3);
}
