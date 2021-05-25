#include "libft.h"

int	ft_dig16len(unsigned int num)
{
	int			i;

	i = 1;
	while ((num > 15) && (++i))
		num /= 16;
	return (i);
}
