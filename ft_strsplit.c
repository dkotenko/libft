#include "libft.h"

char ** ft_strsplit(char const *s, char c)
{
	int i;
	int start;
	char **arr;
	int count;
	int j;
	
	i = 0;
	while(s[i])
		i++;
	arr = (char **)malloc(sizeof(char *) * i + 1);
	i = 0;
	count = 0; 
	while(s[i])
	{
		while(s[i] && (char)s[i] == c)
			i++;
		start = i;
		if (!s[i])
			return arr;
		while(s[i] && (char)s[i] != c)
			i++;
		if (!(arr[count] = ft_strnew(i - start + 1)))
			return NULL;
		j = 0;
		while (start < i)
			arr[count][j++] = s[start++];
		arr[count++][j] = '\0';
	}
	arr[count] = NULL;
	if (!arr[0])
		return NULL;
	return arr;
}
