
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	char *res;
	char ch;

	ch = (char)c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			res = (char *)&s[i];
		i++;
	}
	if (s[i] == ch)
		res = (char *)&s[i]; 
	return (res);
}
