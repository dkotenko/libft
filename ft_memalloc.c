#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *a;
	
	a = malloc(size);
	if (!a)
		return NULL;
	ft_memset(a, 0, size);
	return (a);
}
