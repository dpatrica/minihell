#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lena;

	i = 0;
	j = 0;
	if ((lena = ft_strlen(needle)) == 0)
		return ((char*)haystack);
	while (haystack[i] && (i + j) < len && lena <= len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && needle[j] && (i + j) < len)
			j++;
		if (j == lena)
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}
