/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <diogosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:14:45 by diogosan          #+#    #+#             */
/*   Updated: 2024/03/28 12:15:41 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack_node **stack)
{
	t_stack_node	*rotate_bag;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	rotate_bag = find_last_node(*stack);
	rotate_bag->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	rotate_bag->next->prev = rotate_bag; // volta a meter na stack
	rotate_bag->next->next = NULL;
}

void	ra(t_stack_node **a)
{
	rotate(a);
	printf("ra\n");
}

void	rb(t_stack_node **b)
{
	rotate(b);
	printf("rb\n");
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	rotate(a);
	rotate(b);
	printf("rr\n");
}
