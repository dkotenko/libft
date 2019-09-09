#include "libft.h"

void    *ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char*)destination;
	while (n > 0)
	{
		*(s++) = (unsigned char)c;
		n--;
	}
	return (destination);
}