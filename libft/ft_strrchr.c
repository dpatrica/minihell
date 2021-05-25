#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c != '\0')
	{
		while (i > 0)
		{
			i--;
			if (*((char*)s + i) == (char)c)
				return ((char*)s + i);
		}
	}
	else
		return ((char*)s + i);
	return (NULL);
}
