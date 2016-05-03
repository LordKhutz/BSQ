#include "ft_header.h"

void    ft_get_map(int y, char *argv)
{
	char	m[v[0]][v[1]];
	int	n[6];

	n[0] = 6;
	while (--n[0] > -1) if (n[0] != 0) n[n[0]] = 0;
	while (argv[++n[0]] && n[3] == 0)
	{
		if (argv[n[0]] == '\n')
		{
			n[4]++;
			if (n[4] == 2) n[5] = n[1] - 1;
			if (n[5] != n[1] - 1 && n[4] >= 2) n[3] = 1;
			n[1] = 0;
			y++;
		}
		else
		if (n[4] > 1 && argv[n[0]] != v[3] && argv[n[0]] != v[4])
			n[3] = 1;
		if (y >= 0 && argv[n[0]] != '\n')
			m[y][++n[1] - 1] = argv[n[0]];
	}
	if (n[3] == 1)
		write(1, "map error\n", 10);
	else
		ft_place_x(m);
}
