void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!*lst)
		return ;
	while (templist -> next)
    ft_lstdelone(templist, del);
	*lst = NULL;
}
