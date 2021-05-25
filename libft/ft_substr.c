#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arr;

	if (((arr = ft_calloc(len + 1, sizeof(char))) == NULL) || s == NULL)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
		while (len-- && s[start])
			arr[i++] = s[start++];
	return (arr);
}
