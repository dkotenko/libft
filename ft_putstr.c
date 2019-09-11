#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar((char)s[i]);
			i++;
		}
	}
}
