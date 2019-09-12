#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	
	if(!s || !(str = ft_strnew(len + 1)))
		return NULL;
	str = ft_strncpy(str, (char *)s + start, len);
	return (str);
}
