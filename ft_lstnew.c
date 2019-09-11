t_list * ft_lstnew(void const *content, size_t content_size)
{
	t_list *listnew;
	
	listnew = (t_list*)ft_memalloc(sizeof(t_list))
	if (!listnew)
		return (NULL);
	if (content == NULL)
	{
		listnew->content = NULL;
		listnew->content_size = 0;
	}
	else
	{
		listnew->content = malloc(content_size);
		if (listnew->content == NULL)
			return (NULL);
		ft_memmove(listnew->content, content, content_size);
		listnew->content_size = content_size;
	}
	listnew->next = NULL;
	return (listnew);
}