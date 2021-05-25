#include "libft.h"

int	ft_mpldig(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-'))
		return (1);
	return (0);
}
