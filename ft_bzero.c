#include "libft.h"

void bzero(void *destination, size_t n)
{
    size_t i;
    char *s;
        
    s = (char *)destination;    
    i = 0;
    while (i < n)
    {
        s[i] = '\0';
        i++;
    }
}