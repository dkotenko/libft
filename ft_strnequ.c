int ft_strnequ(char const *s1, char const *s2, size_t n)
{	
	if (!s1 || !s2)
		return (0);
	while ((*s1 || *s2) && *s1 == *s2 & n > 0)
	{
		n--;
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}