/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "get_next_line.h"
#include "lemin.h"

char	*get_content(void)
{
	int	a = 0;
	char    *str;
	char    *map = "";

	while ((str = get_next_line(0))) {
		map = my_strcat(map, str);
		map = my_strcat(map, "\n");
		free(str);
	}
	a = my_strlen(map);
	if (a == 0)
		return (NULL);
	while (a > 0 && map[a] != '\n')
		a--;
	map[a] = '\0';
	return (map);
}
