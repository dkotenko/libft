#include "libft.h"

char *ft_strstr(const char *str, const char *substr)
{
	int i;
	int j;
	unsigned char *p;
	unsigned char *st;
	unsigned char *su;

	st = (unsigned char *)str;
	su = (unsigned char *)substr;
	i = 0;
	if (!*su)
		return ((char *)st);

	while(st[i])
	{
		if(st[i] == *su)
		{
			j = 0;
			p = st + i;
			while(su[j] && st[i] == su[j])
			{
				i++;
				j++;
			}
			if(!su[j])
				return ((char *)p);
		}
		i++;
	}
	return NULL;
}
