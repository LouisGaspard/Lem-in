/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

void	print_ant(int path_row, int x, char **path, int ant_in)
{
	if (path_row - x < nb_nodes(path)) {
		my_printf("P%d-%s", x + 1, path[path_row - x]);
		if (x < (ant_in - 1))
			my_putchar(' ');
	}
}

int	print_moves(char **path, int nb_ants)
{
	int	x = 0;
	int	path_row = 1;
	int	ant_in = 1;

	while (path_row < (nb_nodes(path) + nb_ants - 1)) {
		x = 0;
		while (x < ant_in) {
			print_ant(path_row, x, path, ant_in);
			x++;
		}
		my_putchar('\n');
		ant_in < nb_ants ? ant_in++ : ant_in;
		path_row++;
	}
	return (0);
}
