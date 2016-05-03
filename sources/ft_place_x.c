#include "ft_header.h"

void    ft_place_x(char m[v[0]][v[1]])
{
	int	n[3];

	n[0] = 0;
	while (++v[2] != -1 && n[0] == 0)
	{
		n[2] = -1;
		v[6] = 0;
		while (++n[2] < v[0] && v[6] == 0 && n[2] < v[3] - v[2] + 1)
		{
			n[1] = -1;
			while (++n[1] < v[1] && v[6] == 0 && n[1] < v[1] - v[2] + 1)
			if (m[n[2]][n[1]] == v[3])
				ft_find_x(n[1], n[2], v[3], m);
		}
		if (v[6] == 2) v[2]++;
			else n[0] = ft_block_x(v[2] - 1, m);
	}
	n[2] = -1;
	while (++n[2] < v[0]) {
		n[1] = -1;
		while (++n[1] < v[1]) write(1, &m[n[2]][n[1]], 1);
		write(1, "\n", 1);
	}
}
