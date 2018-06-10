/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

char	**get_tunnels(char **content)
{
	char	**tunnels;
	int	j = 0;
	int	i = 0;

	tunnels = malloc(sizeof(*tunnels) * (nb_tun(content) + 1) * 2);
	if (tunnels == NULL)
		return (NULL);
	while (content[i] &&
		(is_char_in(content[i], '-') != 0 || content[i][0] == '#'))
		i++;
	while (content[i]) {
		if (is_char_in(content[i], '-') == 0 && content[i][0] != '#') {
			tunnels[j] = my_strdup(content[i]);
			tunnels[j + 1] = my_swap_content(content[i]);
			j = j + 2;
		}
		i++;
	}
	tunnels[j] = NULL;
	return (tunnels);
}

int	already_path(char **path, char *str)
{
	int	i = 0;
	int	j = 0;

	while (str[j] != '-')
		j++;
	j++;
	if (path == NULL)
		return (j);
	while (path[i]) {
		if (my_strncmp(&str[j], path[i], my_strlen(path[i])) == 0)
			return (0);
		i++;
	}
	return (j);
}

char	**path_finding(char **content)
{
	int	nb_ants = my_getnbr(content[0]);
	char	*start = get_next_name(content, "##start");
	char	*end = get_next_name(content, "##end");
	char	**tunnels = get_tunnels(content);
	char	**path = NULL;

	if (nb_ants == 0 || start == NULL || end == NULL || tunnels == NULL)
		return (NULL);
	path = search_path(path, end, tunnels, start);
	return (path);
}
