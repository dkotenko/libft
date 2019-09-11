#include "libft.h"

void ft_bzero(void *dest, size_t n)
{
    size_t i;
    char *s;
        
    s = (char *)dest;    
    i = 0;
    while (s[i] && i < n)
    {
        s[i] = '\0';
        i++;
    }
}
