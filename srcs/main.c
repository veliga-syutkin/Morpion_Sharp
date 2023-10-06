#include "includes/ft_all.h"

int main(int argc, char **argv)
{
	int x;
	int y;
	char **grid;

	if (argc != 3)
		return(0);
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	grid = ft_create_grid(x, y);
	ft_print_grid(x, y, grid);
	ft_free_grid(grid, x, y);
	return (0);
}
