#include "../includes/ft_grid.h"

// create grid
char **ft_create_grid(int line, int y)
{
	char	**grid;
	int 	i;
	int		j;

	grid = malloc(line * sizeof(char*)); //on crée un tableau de X cases
	if(!grid)
		return (NULL); //erreur

	i = 0;
	while(i < line)
	{
		grid[i] = malloc(y * sizeof(char) + 1); //on crée la deuxième dimension de la grille en rajoutant Y cases à chaque case du tableau
		if(!grid[i])
			return (NULL); // renvoyer une erreur (?) se barrer (?) //-> voir faire une fonction "achtung ?" 

		j = 0;
		while (j < y)
		{
			grid[i][j] = '|';
			j++;
		}
		i++;
	}
	return (grid);
}

void ft_free_grid(int x, int y, char **grid)
{
	int i;

	i = y;
	i = x;
	while (i > 0)
	{
		free(grid[i]);
		if(!grid[i])
			return ; // erreur
		i--;
	}
	free(grid);
	if(!grid)
		return ;
}

void	ft_print_line(int line, int size, char **grid)
{
	int column;

	column = 0;
	while (column < size)
	{
		printf("%c ", grid[line][column]);
		column++;
	}
	printf("\n");
}

void ft_print_grid(int line, char **grid)
{
	int index;

	index = 0;
	while (index < line)
	{
		ft_print_line(index, line, grid); //on avance ligne a ligne
		index++;
	}
}
