/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

int	check_line_tunnels(char *line)
{
	int	b = 0;

	while (line[b]) {
		if (my_char_is_num(line[0]) && line[1] == '-')
			return (1);
		b++;
	}
	return (0);
}

int	line_bf_tunnels(char **tab)
{
	int	a = 0;

	while (tab[a]) {
		if ((check_line_tunnels(tab[a])) != 0)
			return (a);
		a++;
	}
	return (a);
}

void	my_print_rooms(t_lemin *lem)
{
	int	a = 1;

	while (a != line_bf_tunnels(lem->tab)) {
		if ((not_good_line(lem->tab[a], lem)) == 1) {
			a += 1;
			continue;
		}
		if (lem->tab[a] != NULL)
			my_printf("%s\n", lem->tab[a]);
		a++;
	}
}

void	my_print_tunnels(t_lemin *lem)
{
	int	a = line_bf_tunnels(lem->tab);

	while (lem->tab[a]) {
		my_printf("%s\n", lem->tab[a]);
		a++;
	}
}

void	my_print_lemin(t_lemin *lem)
{
	my_printf("#number_of_ants\n%d\n", lem->nb_ants);
	my_printf("#rooms\n");
	if (my_strcmp(lem->start, "null"))
		my_printf("##start\n%s\n", lem->start);
	if (my_strcmp(lem->end, "null"))
		my_printf("##end\n%s\n", lem->end);
	my_print_rooms(lem);
	my_printf("#tunnels\n");
	my_print_tunnels(lem);
	my_printf("#moves\n");
}
