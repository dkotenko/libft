#include <stdlib.h>
#include "libft.h"

void *ft_memmove(void* dst, const void* src, unsigned int n)
{
 
	char *tmp;
	unsigned int i;
	char *pDst = (char *)dst;
	char *pSrc =(char *)src;
	 
	 
	tmp = (char *)malloc(sizeof(char ) * n);
	if(!tmp)
		return NULL;
	else
	{
		i = 0;
		while(i < n)
		{
			tmp[i] = pSrc[i];
			i++;
		}
		i = 0;
		while(i < n)
		{
			pDst[i] = tmp[i];
			i++;
		}
		free(tmp);
		return dst;
	}
}
