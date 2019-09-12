#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int len1;
	int len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	
	if(!s1 || !s2 || !(str = ft_strnew(len1 + len2 + 1)))
		return NULL;
	str = ft_strcpy(str, (char *)s1);
	str = ft_strcat(str, s2);
	return (str);
}
