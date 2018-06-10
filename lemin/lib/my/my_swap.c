/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** task01
*/

void	my_swap(char **a, char **b)
{
	char	*tmp = *a;

	*a = *b;
	*b = tmp;
}
