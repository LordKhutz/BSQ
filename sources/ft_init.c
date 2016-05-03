#include "ft_header.h"

void	ft_init(char *argv)
{
	int     n[4];

	n[0] = 3;
	n[1] = 0;
	n[2] = 0;
	while (--n[0] > -1) v[n[0]] = 0;
	while (argv[++n[0]] != '\0' && n[1] != 2)
	{
		if (argv[n[0]] >= '0' && argv[n[0]] <= '9')
			v[0] = (v[0] * 10) + (argv[n[0]] - 48);
		else
			n[2]++;
		if (n[2] == 1) v[3] = argv[n[0]];
		if (n[2] == 2) v[4] = argv[n[0]];
		if (n[2] == 3) v[5] = argv[n[0]];
		if (argv[n[0]] == '\n') n[1]++;
		if(n[1] == 1) v[1]++;
	}
	v[1]--;
	ft_get_map(-1, av);
}