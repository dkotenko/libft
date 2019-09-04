#include <string.h>

void *ft_memset(void *destination, int c, size_t n)
{
    size_t i;
    char *s;
    unsigned char symbol;
    
    s = (char *)destination;
    symbol = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        s[i] = symbol;
        i++;
    }
}