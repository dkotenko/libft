char * ft_strtrim(char const *s)
{
	int i;
	int ws;
	char *str;
	int j;
	
	ws = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			ws++;
		i++;
	}
	str = ft_strnew(i - ws + 1);	
	if (!str)
		return (NULL);
	j = 0;
	ws = 0;
	while(j<i)
	{
		if(s[j] != ' ' || s[j] != '\n' || s[j] != '\t')
			str[ws++] = s[j++];
		else
			j++;
	}
	str[ws] = '\0';
	return(str);
	
			
	
	
	
	
		
		
	
	
	