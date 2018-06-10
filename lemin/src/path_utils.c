/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

char	*get_name(char *src)
{
	char	*str;
	int	i = 0;

	if ((str = malloc(sizeof(*str) * my_strlen(src))) == NULL)
		return (NULL);
	while (src[i] != '\0' && src[i] != ' ' && src[i] != '\t') {
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*get_next_name(char **content, char *src)
{
	int	i = 0;

	while (content[i] != NULL) {
		if (my_strcmp(src, content[i]) == 0)
			return (get_name(content[i + 1]));
		i++;
	}
	return (NULL);
}

int	is_char_in(char *str, char c)
{
	int	i = 0;

	while (str[i]) {
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	nb_tun(char **content)
{
	int	i = 0;
	int	nb = 0;

	while (content[i] &&
		(is_char_in(content[i], '-') != 0 || content[i][0] == '#'))
		i++;
	while (content[i]) {
		if (is_char_in(content[i], '-') == 0 && content[i][0] != '#')
			nb++;
		i++;
	}
	return (nb);
}

int	nb_nodes(char **path)
{
	int	i = 0;

	while (path[i])
		i++;
	return (i);
}
