/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** my_strncpy
*/

#include "my.h"

char	*my_strncpy(char *dest, char const *src, int n)
{
	int	a = 0;

	dest = malloc(sizeof(char) * n + 1);
	while (src[a] && n > 0) {
		dest[a] = src[a];
		n--;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
