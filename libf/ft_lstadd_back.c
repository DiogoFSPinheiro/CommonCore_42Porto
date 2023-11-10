void ft_lstadd_back(t_list **lst, t_list *new)
{
      if (lst == NULL && new == NULL)
	      return;
      if (lst == NULL)
      	{
		*lst = new
		return;
	}
	while (lst)
	    lst = lst-> next;
	  
      lst -> next = new;
}
