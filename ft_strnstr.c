#include "libft.h"

char *ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t i;
	size_t j;
	char *s;
	size_t len;

	len = 0;
	while (substr[len])
		len++;
	i = 0;
	j = 0;
	if (!*substr)
		return ((char *)str);
	while(str[i] && i < n)
	{
		if(str[i] == *substr)
		{
			j = 0;
			s = (char *)str + i;
			while(substr[j] && i < n && str[i] == substr[j])
			{
				i++;
				j++;
			}
			if(j == len)
				return (s);
		}
		i++;
	}
	return NULL;
}
