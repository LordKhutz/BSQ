#include "ft_header.h"

int	ft_block_x(int p, char m[v[0]][v[1]])
{
	int	n[3];

	n[0] = 0;
	while (n[0] == 0)
	{
		v[2] = p;
		v[6] = 0;
		n[1] = -1;
		while (++n[1] < v[0] && n[0] == 0 && n[1] < v[3] - v[2] + 1)
		{
			n[2] = -1;
			while (++n[2] < v[1] && n[0] == 0 && n[2] < v[1] - v[2] + 1)
			{
				if (m[n[1]][n[2]] == v[3])
					ft_find_x(n[2], n[1], v[3], m);
				if (v[6] == 2) {
					ft_find_x(n[2], n[1], v[5], m);
					n[0]++;
				}
			}
		}
		if (n[0] == 0) p--;
	}
	return 1;
}
