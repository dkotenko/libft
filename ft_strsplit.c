char ** ft_strsplit(char const *s, char c)
{
	int i;
	int start;
	char **arr;
	int count;
	int j;
	
	i = 0;
	count = 0; 
	while(s[i])
	{
		while(s[i] && (char)s[i] == c)
			i++;
		start = i;
		while(s[i] && (char)s[i] != c)
			i++;
		arr[count] = ft_strnew(i - start + 1);
		j = 0;
		while (start < i)
			arr[count][j++] = s[start++];
		arr[count++][j] = '\0';
	}
	arr[count] = '\0';
	if (!arr[0])
		return NULL
	return arr;
		
			
		