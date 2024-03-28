/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <diogosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:14:32 by diogosan          #+#    #+#             */
/*   Updated: 2024/03/28 12:14:37 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_isdigit(int c)
// {
// 	if (c < '0' || c > '9')
// 		return (0);
// 	return (1);
// }

int	is_string_digit(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static long	ft_atol(const char *str)
{
	long	i;
	long	b;
	long	c;

	i = 0;
	b = 1;
	c = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == ' '
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			b *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		++i;
	}

	return (c * b);
}

int strcomp(char *str1, char *str2)
{
	int c;

	c = 0;
	while(str1[c] && str2[c])
	{
		if (str1[c] != str2[c])
			return (0);
		c++;
	}
	return (1);
}

bool check_if_num(char *str)
{
	int	c;

	c = 0;
	while(str[c])
	{
		if (ft_isdigit(str[c]))
			return (true);
		c++;
	}
	return (false);
}

int	verify(char **numbers)
{
	int	c;
	int i;

	c = 0;
	while (numbers[c])
	{
		i = c + 1;
		if (!is_string_digit(numbers[c])  || (ft_atol(numbers[c]) > INT_MAX  || ft_atol(numbers[c]) < INT_MIN))
			return (0);
		while(numbers[i])
		{
			if(ft_atol(numbers[c]) == ft_atol(numbers[i])) //check duplos
				return (0);
			i++;
		}
		c++;
	}
	return (1);
}

t_stack_node	*find_last_node(t_stack_node *stack) 
{
	if(!stack)
		return NULL;
	while(stack->next)
		stack = stack->next;
	return (stack);
}

void	append_node(t_stack_node **a, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!a)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->nbr = n;
	if(!(*a))
	{
		*a = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*a);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	stack_a_init(t_stack_node **a, char **args)
{
	int c;

	c = 0;
	while (args[c])
	{
		append_node(a, ft_atol(args[c]));
		c++;
	}

}
void	print_stack(t_stack_node *a)
{
	t_stack_node *temp =NULL;

	temp = a;

	while(temp)
	{
		printf("%d\n", temp->nbr);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char 			**numbers;
	
	a = NULL;
	b = NULL;

	if (argc == 1 || (argc== 2 && !argv[1][0]))
		return (printf("Error"));

	else if (argc== 2)
	{
		if (check_if_num(argv[1]))
			numbers = ft_split(argv[1], ' ');
		else
			return(printf("Error"));
	}
	else
		numbers = argv + 1;
	
	if (verify(numbers))
		{
		printf("ok\n");
		stack_a_init(&a, numbers);
		}
	print_stack(a);
	write(1,"\n",1);
	//print_stack(b);
	//write(1,"\n",1);
	
	
	pb(&a,&b);
	pb(&a,&b);
	rr(&a,&b);
	
	
	//sb(&b);

	print_stack(a);
	write(1,"\n",1);
	print_stack(b);
	return (0);
}
