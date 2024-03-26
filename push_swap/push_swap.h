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

//handle Errors
int is_string_digit(char *str);


//Stack inits
void    stack_a_init(t_stack_node **a, char **args);
//Nodes inits

//Stack utils

//Commands

void    pa(t_stack_node **a, t_stack_node **b);
void    pb(t_stack_node **a, t_stack_node **b);

//algoritms


#endif
