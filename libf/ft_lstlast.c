t_list	*ft_lstlast(t_list	*list)
{
	if (lst == NULL)
		return (NULL);
 	 while (list) // sera que retorna o null ?
		list = list-> next;
	return (list);
}
