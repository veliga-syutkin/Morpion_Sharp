char **ft_create_grid(int x, int y)
{
	char	**grid;
	int 	i;

	grid = malloc(x * sizeof(char*)); //on crée un tableau de X cases
	if(!grid)
		return (grid); //erreur
	i = 0;
	while(i < x)
	{
		grid[i] = malloc(y * sizeof(char)); //on crée la deuxième dimension de la grille en rajoutant Y cases à chaque case du tableau
		if(!grid[i])
			return (grid[i]); // renvoyer une erreur (?) se barrer (?) //-> voir faire une fonction "achtung ?" 
		grid[i] = '|';
		i++;
	}
	return (grid);
}

void ft_free_grid(char **grid, int x, int y)
{
	int i;

	i = y;
	while (i > 0)
	{
		free(grid[i]);
		if(!grid[i])
			return (grid[i]); // erreur
		i--;
	}
	free(grid);
	if(!grid)
		return (grid);
}

void ft_print_cell(int x, int y, char **grid)// <<<- 
{
	//on modifiera pour des write plus tard
	//
	/* 
	
	si premiere case 
	|
	puis dans tous les cas :
	_X_| 
	*/
    if (x == 0)
        printf("|");
    else
	    printf("_%c_|", grid[x][y]);
}

void ft_print_line(int x, int y, char **grid)
{
	/*
	si premiere ligne 
	-----------------
	puis dans tous les cas : 
	|_X_|_X_|_X_|_X_|  (ft_print_cell)
	-----------------
	*/
	int i;

	if (y == 0)
	{
		write(1, "\n", 1); //afficher une ligne de ---
		i = 0;
		while (i < x)
		{
			write(1, "----", 4);
			i++;
		}
		write(1, "\n", 1);
	}

	i = 0;
	while (i < x)
	{
		ft_print_cell(i, y, grid);
		i++;
	}

	write(1, "\n", 1); //afficher une ligne de ---
	i = 0;
	while (i < x)
	{
		write(1, "----", 4);
		i++;
	}
	write(1, "\n", 1);

}

void ft_print_grid(int x, int y, char **grid)
{
	int i;

	i = 0;
	while (i < x)
	{
		ft_print_line(x, i, grid); //on avance ligne a ligne
		i++;
	}
}