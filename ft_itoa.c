#include <stdlib.h>

void ft_reverse(char *s)
{
    int i;
    int j;
    char temp;
    
    i = 0;
    j = 0;
    while(s[j])
        j++;
    j--;
    while(i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int ft_abs(int n)
{
    
    if(n < 0)
        return (-n);
    return n;
}

char *ft_itoa(int n)
{    
    int sign;
    char *s;
    int i;

    i = 0;
    sign = n;
    while(n)
    {
        n /= 10;
        i++;
    }
    if (!(sign > 0))
	{
        i++;
	}
	n = sign;
    s = (char *)malloc(sizeof(char)*i + 1);
	if (!s)
		return NULL;
	i = 0;
    while(n)        
    {
        s[i] = ft_abs(n % 10) + '0';
        i++;
        n /= 10;
    }
    if (sign < 0)
        s[i++] = '-';
    else if (sign == 0)
    	s[i++] = '0'; 	

    s[i] = '\0';
    ft_reverse(s);
    return (s);
}
