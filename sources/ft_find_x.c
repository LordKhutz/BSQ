#include "ft_header.h"

void    ft_find_x(int x, int y, char r, char m[v[0]][v[1]])
{
	int	n[4];

	n[0] = y - 1;
	n[1] = 0;
	n[2] = 0;
	while (++n[0] < y + v[2] && n[0] < v[0] && n[1] == 0)
	{
		n[3] = x - 1;
		while (++n[3] < x + v[2] && n[3] < v[1] && n[1] == 0)
			if (m[n[0]][n[3]] == v[3] && n[1] == 0)
			{
				m[n[0]][n[3]] = r;
				n[2]++;
			}
			else
				n[1]++;
	}
	if (n[1] == 0 && n[2] == v[2] * v[2]) v[6] = 2;
}
