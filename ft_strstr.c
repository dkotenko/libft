#include "libft.h"

char *ft_strstr(const char *str, const char *substr)
{
	int i;
	int j;
	char *p;
	
	while(str[i])
	{
		if(str[i] == substr[0])
		{
			j = 0;
			p = (char *)str;
			while(str[i] == substr[j])
			{
				i++;
				j++;
			}
			if(!substr[j])
				return p;
		}
		i++;
	}
	return NULL;
}
	
