#include "ft_header.h"

void ft_openfile(char *mapFile)
{
	int f[9];
	char n;
	int i;

	i = -1;
	av = malloc(ft_getMapSize(mapFile));
	*f = open(mapFile, O_RDONLY, 1);
	while (read(*f, &n, 1))
	{
		av[++i] = n;
	}
	av[i + 1] = '\0';
	ft_init(av);
	close (*f);
}