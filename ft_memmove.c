#include "libft.h"

void *ft_memmove(void* dst, const void* src, unsigned int n)
{
	unsigned int i;
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return NULL;
	i = 0;
	if (s < d)
	{
		while (i++ < n)
			d[n - i] = s[n - i];
	}
	else
	{
		while (i++ < n)
			d[i - 1] = s[i - 1];
	}
	return d;
}
