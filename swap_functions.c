/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:58:47 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 13:59:45 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *stack_a, int index_a)
{
	int	temp;

	if (index_a <= 0)
		return ;
	temp = stack_a[index_a];
	stack_a[index_a] = stack_a[index_a - 1];
	stack_a[index_a - 1] = temp;
	write(1, "sa\n", 3);
}

void	sb(int *stack_b, int index_b)
{
	int	temp;

	if (index_b <= 0)
		return ;
	temp = stack_b[index_b];
	stack_b[index_b] = stack_b[index_b - 1];
	stack_b[index_b - 1] = temp;
	write(1, "sb\n", 3);
}

void	ss(int *stack_a, int *stack_b, int index_a, int index_b)
{
	sa(stack_a, index_a);
	sb(stack_b, index_b);
	write(1, "ss\n", 3);
}
