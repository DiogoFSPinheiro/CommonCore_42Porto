#include "push_swap.h"

static void push(t_stack_node **dst, t_stack_node **src)
{
    t_stack_node *push_bag;

    if(!src)
        return ;
    push_bag = *src;
    *src = (*src)->next;
    if(*src)
        (*src)->prev = NULL;
    push_bag->next = NULL;
    if (!*dst)
    {
        *dst = push_bag;
        push_bag->next = NULL;
    }
    else
    {
        push_bag->next = *dst;
        push_bag->next->prev = push_bag;
        *dst = push_bag;
    }
}

void    pa(t_stack_node **a, t_stack_node **b)
{
    push(a, b);
    printf("pa\n");
}
void    pb(t_stack_node **a, t_stack_node **b)
{
    push(b, a);
    printf("pb\n");
}