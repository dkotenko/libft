#include "libft.h"

char *ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t i;
	size_t j;
	char *s;

	i = 0;
	j = 0;
	if (!*substr)
		return ((char *)str);
	while(*str && i < n)
	{
		if(*str == *substr)
		{
			j = 0;
			s = (char *)str;
			while(substr[j] && str[i++] == substr[j++])
				;
			if(!substr[j] || j == n)
				return (s);
			i -= j;
		}
		i++;
		*str++;
	}
	return NULL;
}
