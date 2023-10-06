#ifndef FT_GRID_H
# define FT_GRID_H

# include "ft_all.h"

char **ft_create_grid(int x, int y);
void ft_free_grid(int x, int y, char **grid);
void ft_print_cell(int x, int y, char **grid);
void ft_print_line(int x, int y, char **grid);
void ft_print_grid(int x, int y, char **grid);

#endif
