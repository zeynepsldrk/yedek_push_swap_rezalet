/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:26:56 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/02 16:59:53 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	go_sort(int ac, int *stack_a, int *stack_b)
{
	int	*index_a;
	int	*index_b;

	index_a = open_heap(1);
	index_b = open_heap(1);
	*index_a = ac - 1;
	*index_b = -1;
	if (ac == 2)
		two_elements_sorting(stack_a, index_a);
	else if (ac == 3)
		three_elements_sorting(stack_a, index_a);
	else if (ac == 4)
		four_elements_sorting(stack_a, stack_b, index_a, index_b);
	else if ((ac >= 5) && (ac <= 10))
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
	if (is_sorted(stack_a, ac))
	{
		free(stack_a);
		free(stack_b);
		return ;
	}
	go_sort(ac, stack_a, stack_b);
	free(stack_a);
	free(stack_b);
}

void	mini_check(char **av, int ac)
{
	if (!arg_check(av, ac))
		print_error();
	start_push_swap(av + 1, ac - 1);
}

int	main(int ac, char **av)
{
	char	**slice_arg;
	int		arg_count;

	if (ac > 2)
		mini_check(av, ac);
	else if (ac == 2)
	{
		slice_arg = ft_split(av[1], ' ');
		if (!slice_arg[0] || !slice_arg)
		{
			if (slice_arg)
				free(slice_arg);
			print_error();
		}
		arg_count = find_arg_count(slice_arg);
		if (!arg_check_two(slice_arg, arg_count))
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
