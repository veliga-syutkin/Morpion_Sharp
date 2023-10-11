#include "includes/ft_all.h"

int main(int argc, char **argv)
{
	int x;
	int y;
	char **grid;
	struct s_game_header *gameheader;

	if (argc != 3)
		return(0);
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	grid = ft_create_grid(x, y);
	gameheader = ft_players();
	ft_print_game_header(gameheader);
	ft_print_grid(x, grid);
	ft_free_grid(x, y, grid);
	printf("\n- - - \n");
	return (0);
}
