
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;
	char ch;

	i = 0;
	ch = c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
