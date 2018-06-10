/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include "my.h"

int	get_nb_word(char const *str, char delim)
{
	int	nb_word = 0;

	for (int a = 0; str[a]; a++) {
		if (str[a] == delim)
			nb_word++;
	}
	return (nb_word);
}

char	*get_current_word(char const *str, int *b, char delim)
{
	int	a = *b;
	int	len;
	int	c = 0;
	int	start = *b;
	char	*dest;

	while (str[a] != delim && str[a])
		a++;
	len = a - *b;
	dest = malloc(sizeof(char) * len + 1);
	while (c != len) {
		dest[c] = str[start];
		start++;
		c++;
	}
	dest[c] = '\0';
	*b = a + 1;
	return (dest);
}

char	**my_str_to_word_array(char const *str, char delim)
{
	char	**tab;
	int	nb_word = get_nb_word(str, delim) + 1;
	int	a = 0;
	int	b = 0;
	char	*word;

	if ((tab = malloc(sizeof(char *) * (nb_word + 1))) == NULL)
		return (NULL);
	while (a != nb_word) {
		word = get_current_word(str, &b, delim);
		tab[a] = my_strdup(word);
		free(word);
		a++;
	}
	tab[a] = NULL;
	return (tab);
}
