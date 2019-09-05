#include <string.h>

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	
	i = 0;
	while(i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		if ((unsigned char*)dest)[i] == (unsigned char)c)
			return ((void*)(dest + i + 1);
		i++;
	}
	return (NULL);
}