#include "libft.h"

char *ft_strstr(const char *str, const char *substr)
{
	int i;
	int j;
	char *p;
	
	i = 0;
	if (!*substr)
		return ((char *)str);
	while(str[i])
	{
		if(str[i] == *substr)
		{
			j = 0;
			p = (char *)str + i;
			while(substr[j] && str[i] == substr[j])
			{
				i++;
				j++;
			}
			if(!substr[j])
				return (p);
		}
		i++;
	}
	return NULL;
}
	
