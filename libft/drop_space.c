#include "libft.h"

int		drop_space(char **map)
{
	int	i;

	i = 0;
	while ((**map == ' ') && (++i))
		(*map)++;
	return (i);
}
