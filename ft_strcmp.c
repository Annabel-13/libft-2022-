#include "libft.h"
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return ((unsigned int)((unsigned char)*s1 - (unsigned char)*s2));
		s1++;
		s2++;
	}
	return (0);
}
