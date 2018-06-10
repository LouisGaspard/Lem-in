/*
** EPITECH PROJECT, 2018
** lem_in
** File description:
** line_check
*/

#include "my.h"
#include "lemin.h"

int     not_good_line(char *str, t_lemin *lem)
{
	if (str == NULL)
		return (0);
	if (my_strcmp(str, "##end") == 0)
		return (1);
	if (my_strcmp(str, "##start") == 0)
		return (1);
	if (my_strcmp(str, lem->end) == 0)
		return (1);
	if (my_strcmp(str, lem->start) == 0)
		return (1);
	return (0);
}
