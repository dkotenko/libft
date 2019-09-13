#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
			return ((void*)(d + i + 1));
		i++;
	}
	return (NULL);
}
