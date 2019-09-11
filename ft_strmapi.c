char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;
	
	i = 0;
	while(s[i])
		i++;
	str = (char *)malloc(sizeof(char)* i + 1);
	if(!str)
		return NULL
	i = 0;
	while(s[i])
	{
		if (f(s[i]))
			str[i] = f(i, s[i]);
		i++;	
	}
	str[i] = '\0';
	return str;
}