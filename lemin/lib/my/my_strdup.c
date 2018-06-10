/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"

char	*my_strdup(char const *str)
{
	char	*dest;
	int	a = 0;

	if (str == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * my_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	while (str[a]) {
		dest[a] = str[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
