#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*reso;

	reso = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*((char*)reso + i) == c)
			return (reso + i);
		i++;
	}
	return (NULL);
}
