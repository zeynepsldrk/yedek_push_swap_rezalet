/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:16:14 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/02 17:00:11 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

void	four_elements_sorting(
			int *stack_a,
			int *stack_b,
			int *index_a,
			int *index_b
			);
void	small_elements_sorting(
			int *stack_a,
			int *stack_b,
			int *index_a,
			int *index_b
			);

int		arg_check_two(char **av, int ac);
int		is_duplicate_two(char **av);
int		is_number(char *str);
int		is_duplicate(char **av);
int		arg_check(char **av, int ac);
void	print_error(void);
void	free_all_arg_staff(char **args);
char	**ft_split(char const *s, char c);
int		is_sorted(int *stack_a, int size);
void	fill_stack_a(int *stack_a, char **av, int ac);
int		*open_heap(int ac);
void	go_sort(int ac, int *stack_a, int *stack_b);
void	start_push_swap(char **av, int ac);
int		main(int ac, char **av);
void	sort_remaining_elements(int *stack_a, int *index_a, int remaining);
void	bring_top_element(int *stack_a, int *index_a, int min_pos);
int		find_move_elements_count(int index_a);
int		find_min_pos(int *stack_a, int index_a);
int		find_max_bit(int *stack_a, int index_a);
int		find_max_rank(int *stack_a, int index_a);
void	two_elements_sorting(int *stack_a, int *index_a);
void	three_elements_sorting(int *stack_a, int *index_a);
void	pa(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	pb(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	rra(int *stack_a, int *index_a);
void	rra_no_print(int *stack_a, int *index_a);
void	rrb_no_print(int *stack_b, int *index_b);
void	rrb(int *stack_b, int *index_b);
void	rrr(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	ra(int *stack_a, int *index_a);
void	ra(int *stack_a, int *index_a);
void	ra_no_print(int *stack_a, int *index_a);
void	rb_no_print(int *stack_b, int *index_b);
void	rb(int *stack_b, int *index_b);
void	rr(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	sa(int *stack_a, int *index_a);
void	sb(int *stack_b, int *index_b);
void	ss(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	index_stack(int *stack_a, int index_a);
char	*ft_strjoin(char const *s1, char const *s2);
long	ft_atol(const char *str);
int		ft_atoi(char *str);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	boss_sorting(int *stack_a, int *stack_b, int *index_a, int *index_b);
int		find_arg_count(char **string);
void	mini_check(char **av, int ac);

#endif