int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 0;
	while (lst)
	{
		lst = lst-> next;
		++c;
	}
	return (c);
}
