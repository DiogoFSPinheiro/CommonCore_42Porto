#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list  *map;
  t_list	*tmp;
  
  if (!lst || !f || !del)
		  return (NULL);
  map = NULL;
  while (lst)
  {
    tmp = ft_lstnew((*f)(lst -> content))
    if (!temp)
    {
      ft_lstclear(&map, del);
      return (map);
    }
    ft_lstadd_back(&map, tmp);
    lst = lst -> next;  
  }
  return (map)
}
