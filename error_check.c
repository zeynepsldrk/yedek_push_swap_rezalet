/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:05:59 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 19:59:12 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(char **av)
{
	int	i;
	int	j;

	i = 1;
	if (!av[0])
		return (0);
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) == 0)
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
	if (is_duplicate(av))
		return (0);
	while (i < ac)
	{
		if (!is_number(av[i]))
			return (0);
		num = ft_atoi(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

void	free_all_arg_staff(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return;
	while (args[i])
		free(args[i++]);
	free(args);
}
