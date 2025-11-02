/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:26:56 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 20:02:49 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	go_sort(int ac, int *stack_a, int *stack_b)
{
	int	*index_a;
	int	*index_b;

	index_a = open_heap(1);
	index_b = open_heap(1);
    *index_a = ac - 2;
    *index_b = -1;
	if (ac - 1 == 2)
		two_elements_sorting(stack_a, index_a);
	else if (ac - 1 == 3)
		three_elements_sorting(stack_a, index_a);
	else if (ac - 1 == 4)
		four_elements_sorting(stack_a, stack_b, index_a, index_b);
	else if ((ac - 1 >= 5) && (ac - 1 <= 10))
		small_elements_sorting(stack_a, stack_b, index_a, index_b);
	else
    {
        index_stack(stack_a, *index_a);
        boss_sorting(stack_a, stack_b, index_a, index_b);
    }
    free(index_a);
    free(index_b);
}

void	start_push_swap(char **av, int ac)
{
	int	*stack_a;
	int	*stack_b;

	stack_a = open_heap(ac);
	stack_b = open_heap(ac);
	fill_stack_a(stack_a, av, ac);
	if (is_sorted(stack_a, ac - 1))
	{
		free(stack_a);
		free(stack_b);
		return ;
	}
	go_sort(ac, stack_a, stack_b);
	free(stack_a);
	free(stack_b);
}

int main(int ac, char **av)
{
	char	**slice_arg;
	int		arg_count;

	if (ac > 2)
	{
		if (!arg_check(av, ac))
			print_error();
		start_push_swap(av, ac);
	}
	else if (ac == 2)
	{
		slice_arg = ft_split(av[1], ' ');
		if (!slice_arg[0])
			return (0);
		arg_count = find_arg_count(slice_arg);
		if (!arg_check(slice_arg, arg_count))
		{
			free_all_arg_staff(slice_arg);
			print_error();
		}
		start_push_swap(slice_arg, arg_count);
		free_all_arg_staff(slice_arg);
	}
	else
		return (0);
}
