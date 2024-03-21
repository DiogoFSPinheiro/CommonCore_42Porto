#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include "../libft/libft.h"

typedef struct s_stack_node
{
    int                 nbr;
    int                 index;
    int                 push_cost;
    bool                above_median;
    bool                cheapest;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}t_stack_node;

int	ft_isdigit(int c);
int	is_string_digit(char *str);

static long	ft_atol(const char *str);

//handle Errors

//Stack inits

//Nodes inits

//Stack utils

//Commands

//algoritms


#endif
