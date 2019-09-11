#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd((char)s[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
