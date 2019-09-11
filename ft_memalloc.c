#include <stdlib.h>

void * ft_memalloc(size_t size)
{
	void *a;
	
	a = malloc(size);
	return (a);
}
