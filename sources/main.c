#include "ft_header.h"

int main(int argCount, char **argVal)
{
	int i;
	char fromStdIn[99];

	i = 0;
	if (argCount > 1 )
	{
		while(++i < argCount)
		{
			ft_openfile(argVal[i]);
		}
		return (0);
	}
	write(1, "Please enter the path to the map\n", 33);
	read(1, fromStdIn, 99);
	ft_openfile(fromStdIn);
	return(1);
	
}
