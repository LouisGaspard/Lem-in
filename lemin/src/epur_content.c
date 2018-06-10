/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

int	nb_line(char **tab)
{
	int	a = 0;

	while (tab[a])
		a++;
	return (a);
}

int	cmp_good(char *str)
{
	if (my_strncmp(str + 2, "end", 3) && my_strncmp(str + 2, "start", 5))
		return (1);
	return (0);
}

int	check_double_comment(char *str)
{
	int	a = 0;

	while (str[a]) {
		if ((str[a] == '#' && str[a + 1] == '#') && cmp_good(str))
			return (1);
		a++;
	}
	return (0);
}

char	**remove_double_comment(char **content)
{
	int	a = 0;
	int	c = 0;
	char	**epured = malloc(sizeof(char *) * (nb_line(content) + 3));

	while (content[a]) {
		if ((check_double_comment(content[a])) == 1)
			a++;
		epured[c] = content[a];
		a++;
		c++;
	}
	epured[c] = NULL;
	return (epured);
}

char	**epur_content(char **content)
{
	int	a = 0;
	int	b = 0;
	char	**epured = malloc(sizeof(char *) * (nb_line(content) + 3));

	content = free_line_comment(content);
	content = remove_comment_end_line(content);
	content = remove_double_comment(content);
	while (content[a]) {
		if ((my_strcmp(content[a], "null")) != 0) {
			epured[b] = content[a];
			b++;
		}
		a++;
	}
	epured[b] = NULL;
	return (epured);
}
