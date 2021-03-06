#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	if ((arr = (unsigned char *)malloc(count * size)) == NULL)
		return (NULL);
	while (i < count * size)
	{
		arr[i] = '\0';
		i++;
	}
	return (arr);
}
