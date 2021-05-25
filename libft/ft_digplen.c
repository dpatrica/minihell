#include "libft.h"

int	ft_digplen(unsigned long num)
{
	int			i;

	i = 1;
	while ((num > 15) && (++i))
		num /= 16;
	return (i);
}
