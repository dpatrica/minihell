#include "libft.h"

int	ft_ungitlen(unsigned int num)
{
	int			i;

	i = 1;
	while ((num > 9) && (++i))
		num /= 10;
	return (i);
}
