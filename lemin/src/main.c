/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

int	my_lemin(void)
{
	t_lemin	lem;
	char	*str;
	char	**content;
	char	**path;

	if ((str = get_content()) == NULL)
		return (84);
	content = epur_content(my_str_to_word_array(str, '\n'));
	map_parsing(content, &lem);
	path = path_finding(content);
	my_print_lemin(&lem);
	if (path != NULL)
		print_moves(path, lem.nb_ants);
	return (0);
}

int	main(void)
{
	if ((my_lemin()) == 84)
		return (84);
	return (0);
}
