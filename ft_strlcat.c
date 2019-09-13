#include "libft.h"

size_t ft_strlcat (char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;
    size_t len;
	
    i = 0;
    j = 0;
    len = 0;
	while(dest[i])
		i++;
	while(src[len])
		len++;
	if (i < n)
		len += i;
	else
		len += n;
	while(src[j] && i + 1 < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len);
}
