#include "libft.h"

void *ft_memchr (const void *arr, int c, size_t n)
{
	unsigned char *s;
	size_t i;
	
	i = 0;
	s = (unsigned char *)arr;
	while (i < n)
	{
		if ((char)s[i] == (char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
