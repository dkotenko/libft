#include "libft.h"

char *ft_strrchr (const char *str, int ch)
{
	char *p;

	p = NULL;
	while(*str)
	{
		if (*str == ch)
			p = (char *)str;
		str++;
	}
	if (p)
		return (p);
	if (!ch)
		return ((char *)str);
	return (NULL);
}
