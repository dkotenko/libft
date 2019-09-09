int ft_isalpha(int c)
{
	if(c >= 'A' && c <= 'Z')
		return c;
	if(c >= 'a' && c <= 'z')
		return c;
	return 0;
}