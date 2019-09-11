#include "libft.h"

void	ft_putendl(char const *s)
{
	size_t i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
		ft_putchar('\n');
	}
}