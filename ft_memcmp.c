#include "libft.h"

int ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	size_t i;
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)memptr1;
	p2 = (unsigned char *)memptr2;
	i = 0;
	while(i < num && *p1 == *p2)
	{
		i++;
		p1++;
		p2++;
	}
	if (i == num)
		return 0;
	if(*p1 > *p2)
		return (1);
	else if (*p1 < *p2)
		return (-1);	
	return 0;
}
