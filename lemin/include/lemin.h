/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lemin
*/

#ifndef __LEMIN_H__
# define __LEMIN_H__

typedef struct
{
	int	nb_ants;
	char	**tab;
	char	*start;
	char	*end;
} t_lemin;

int	errors(char **content);
int	is_alphanum(char c);
void	my_print_lemin(t_lemin *lemin);
void	print_ant(int path_row, int x, char **path, int ant_in);
int	print_moves(char **path, int nb_ants);
int	map_parsing(char **content, t_lemin *lem);
int	is_char_in(char *str, char c);
int	nb_tun(char **content);
int	nb_nodes(char **path);
int	already_path(char **path, char *str);
char	*get_name(char *src);
char	*get_next_name(char **content, char *src);
char	*get_content(void);
char	*my_swap_content(char *src);
char	**epur_content(char **tab);
char	*end_str(char *str, int a);
char	**free_line_comment(char **content);
char	*check_line_comment(char *str);
char	**remove_comment_end_line(char **content);
char	**path_finding(char **content);
char	**get_tunnels(char **content);
char	**add_node(char **path, char *node);
char	**search_path(char **path, char *end, char **tunnels, char *node);
int	not_good_line(char *str, t_lemin *lem);

#endif
