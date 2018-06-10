/*
** EPITECH PROJECT, 2018
** lem_in
** File description:
** end_str
*/

#include "my.h"
#include "lemin.h"

char	*end_str(char *str, int a)
{
	if (str[a - 1] == ' ')
		str[a - 1] = '\0';
	else
		str[a] = '\0';
	return (str);
}

char	**free_line_comment(char **content)
{
	int	a = 0;

	while (content[a]) {
		if (content[a][0] == '#' && content[a][1] != '#')
			content[a] = my_strdup("null");
		a++;
	}
	return (content);
}

char	*check_comment_line(char *str)
{
	int	a = 0;

	while (str[a]) {
		if (str[a] == '#' && str[a + 1] != '#' && str[a - 1] != '#')
			str = end_str(str, a);
		a++;
	}
	return (str);
}

char	**remove_comment_end_line(char **content)
{
	int	a = 0;

	while (content[a]) {
		content[a] = check_comment_line(content[a]);
		a++;
	}
	return (content);
}

