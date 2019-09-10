#include "libft.h"

char *ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t i;
	size_t j;
	char *p;
	
	i = 0;
	while(str[i] && i < n)
	{
		if(str[i] == *substr)
		{
			j = 0;
			p = (char *)str;
			while(str[i] == substr[j] && i < n)
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
