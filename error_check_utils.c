/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:45:54 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/02 16:48:08 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(char **av)
{
	int		i;
	int		j;
	long	num_i;
	long	num_j;

	i = 1;
	if (!av[0])
		return (0);
	while (av[i])
	{
		j = i + 1;
		num_i = ft_atol(av[i]);
		while (av[j])
		{
			num_j = ft_atol(av[j]);
			if (num_i == num_j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	arg_check(char **av, int ac)
{
	long	num;
	int		i;

	i = 1;
	while (i < ac)
	{
		if (!av[i] || av[i][0] == '\0')
			return (0);
		i++;
	}
	i = 1;
	if (is_duplicate(av))
		return (0);
	while (i < ac)
	{
		if (!is_number(av[i]))
			return (0);
		num = ft_atol(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	arg_check_two(char **av, int ac)
{
	long	num;
	int		i;

	i = 0;
	while (i < ac)
	{
		if (!av[i] || av[i][0] == '\0')
			return (0);
		i++;
	}
	i = 0;
	if (is_duplicate_two(av))
		return (0);
	while (i < ac)
	{
		if (!is_number(av[i]))
			return (0);
		num = ft_atol(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate_two(char **av)
{
	int		i;
	int		j;
	long	num_i;
	long	num_j;

	i = 0;
	if (!av[0])
		return (0);
	while (av[i])
	{
		j = i + 1;
		num_i = ft_atol(av[i]);
		while (av[j])
		{
			num_j = ft_atol(av[j]);
			if (num_i == num_j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
