#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || c == '\0')
	{
		if (*(char*)s == (char)c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
