/*
** EPITECH PROJECT, 2018
** free_tab
** File description:
** free_tab
*/

#include "my.h"

void	my_free_tab(char **tab)
{
	int	a = 0;

	while (tab[a]) {
		if (tab[a] != NULL)
			free(tab[a]);
		a++;
	}
	if (tab != NULL)
		free(tab);
}
