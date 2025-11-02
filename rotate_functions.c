/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:58:45 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/02 16:55:41 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_no_print(int *stack_a, int *index_a)
{
	int	temp;
	int	i;

	if (*index_a <= 0)
		return ;
	temp = stack_a[*index_a];
	i = *index_a;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = temp;
}

void	ra(int *stack_a, int *index_a)
{
	ra_no_print(stack_a, index_a);
	write(1, "ra\n", 3);
}

void	rb_no_print(int *stack_b, int *index_b)
{
	int	temp;
	int	i;

	if (*index_b <= 0)
		return ;
	temp = stack_b[*index_b];
	i = *index_b;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = temp;
}

void	rb(int *stack_b, int *index_b)
{
	rb_no_print(stack_b, index_b);
	write(1, "rb\n", 3);
}

void	rr(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	ra_no_print(stack_a, index_a);
	rb_no_print(stack_b, index_b);
	write(1, "rr\n", 3);
}
