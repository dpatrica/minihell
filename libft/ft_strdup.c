#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	char	*rar;

	if (s1 == NULL)
		return (NULL);
	if ((arr = ft_calloc((ft_strlen(s1) + 1), sizeof(char))) == NULL)
		return (NULL);
	rar = arr;
	while (*s1)
		*arr++ = *s1++;
	return (rar);
}
