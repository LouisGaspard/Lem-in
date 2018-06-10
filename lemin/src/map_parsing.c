/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

char	*epur_line(char *str)
{
	int	a = 0;

	if (my_strcmp(str, "null") == 0)
		return ("null");
	while (str[a]) {
		if ((str[a] >= '0' && str[a] <= '9') || str[a] == ' ')
			a++;
		else {
			str[a] = '\0';
			return (str);
		}
	}
	return (str);
}

char	*get_line(char **tab, char *line)
{
	int	a = 0;

	if (my_str_isnum(tab[0]) == 1)
		a = 1;
	while (tab[a]) {
		if (!(my_strcmp(tab[a], line)))
			return (my_strdup(tab[a + 1]));
		a++;
	}
	return ("null");
}

int	map_parsing(char **content, t_lemin *lem)
{
	lem->tab = content;
	if (lem->tab[0] != NULL && (my_str_isnum(lem->tab[0]) == 1))
		lem->nb_ants = my_getnbr(lem->tab[0]);
	else
		lem->nb_ants = 0;
	lem->start = get_line(lem->tab, "##start");
	lem->start = epur_line(lem->start);
	lem->end = get_line(lem->tab, "##end");
	lem->end = epur_line(lem->end);
	return (0);
}
