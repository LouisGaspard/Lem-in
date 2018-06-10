/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

char	*my_copy(char *str, char *src, int j)
{
	int	i = 0;

	while (src[i] != '-') {
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*my_swap_content(char *src)
{
	char	*str;
	int	i = 0;
	int	j = 0;

	str = malloc(sizeof(*str) * (my_strlen(src) + 1));
	while (src[i] && src[i] != '-')
		i++;
	if (!src[i])
		return (NULL);
	i++;
	while (src[i]){
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '-';
	j++;
	str = my_copy(str, src, j);
	return (str);
}

char	**add_node(char **path, char *node)
{
	char	**new_path = NULL;
	int	i = 0;

	if (path == NULL) {
		new_path = malloc(sizeof(*new_path) * 2);
		if (new_path == NULL)
			return (NULL);
		new_path[0] = my_strdup(node);
		new_path[1] = NULL;
	} else {
		new_path = malloc(sizeof(*new_path) * (nb_nodes(path) + 2));
		if (new_path == NULL)
			return (NULL);
		while (path[i]) {
			new_path[i] = my_strdup(path[i]);
			i++;
		}
		new_path[i] = my_strdup(node);
		new_path[++i] = NULL;
	}
	return (new_path);
}

char	**search_path(char **path, char *end, char **tunnels, char *node)
{
	int	i = 0;
	int	j = 0;
	char	**ret;

	while (tunnels[i]) {
		if (my_strncmp(node, tunnels[i], my_strlen(node)) == 0 \
&& (j = already_path(path, tunnels[i])) != 0) {
			if (my_strcmp(&tunnels[i][j], end) == 0)
				return (add_node(add_node(path, node), \
&tunnels[i][j]));
			if ((ret = search_path(add_node(path, node), \
end, tunnels, &tunnels[i][j])) != NULL)
				return (ret);
		}
		i++;
	}
	return (NULL);
}
