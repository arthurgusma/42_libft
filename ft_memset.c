#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = (char *) s;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return ((void *) temp);
}