#include "ft_header.h"

int ft_getMapSize(char *mapFile)
{
	int f[9];
	char n;
	int	size;

	size = 0;
	*f = open(mapFile, O_RDONLY, 1);
	while (read(*f, &n, 1))
	{
		size += 1;
	}
	close (*f);
	return (size);
}
