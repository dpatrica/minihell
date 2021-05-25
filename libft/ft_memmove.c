#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (dst < src)
	{
		while (i < len)
		{
			*((char*)dst + i) = *((char*)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			*((char*)dst + len) = *((char*)src + len);
		}
	}
	return (dst);
}
