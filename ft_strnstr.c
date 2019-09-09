#include <string.h>

char *strstr(const char *str, const char *substr, size_t n)
{
	size_t i;
	size_t j;
	
	i = 0;
	if (!substr)
		return *str;
	while(str[i] && i < n)
	{
		if(str[i] == *substr)
		{
			j = 0;
			while(str[i] == substr[j] && i < n)
			{
				i++;
				j++;
			}
			if(!substr[j])
				return *(str + i - j);
		}
		i++;
	}
	return NULL;
}