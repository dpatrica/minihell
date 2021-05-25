#include "libft.h"

int	overfree(char **str1, char **str2, char **str3)
{
	int i;

	i = 0;
	if (str1 && *str1 && ++i)
	{
		free(*str1);
		*str1 = NULL;
	}
	if (str2 && *str2 && ++i)
	{
		free(*str2);
		*str2 = NULL;
	}
	if (str3 && *str3 && ++i)
	{
		free(*str3);
		*str3 = NULL;
	}
	return (i);
}
