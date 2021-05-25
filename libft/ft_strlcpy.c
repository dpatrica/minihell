#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lena_src;

	if ((dst == NULL) && (src == NULL))
		return (0);
	lena_src = ft_strlen(src);
	if (!dstsize)
		return (lena_src);
	while (dst && *src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (lena_src);
}
