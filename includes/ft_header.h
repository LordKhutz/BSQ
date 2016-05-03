#ifndef FT_HEADER_H
# define FT_HEADER_H
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*av;
int	v[9], x;
void	ft_find_x(int x, int y, char r, char m[v[0]][v[1]]);
int	ft_block_x(int p, char m[v[0]][v[1]]);
void	ft_place_x(char m[v[0]][v[1]]);
void	ft_get_map(int y, char *argv);
void	ft_init(char *argv);
int	ft_getMapSize(char *mapFile);
void	ft_openfile(char *mapFile);
#endif