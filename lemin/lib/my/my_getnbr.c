/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** task05
*/

int	my_getnbr(char const *str)
{
	int	a = 0;
	int	result = 0;

	while (str[a] && str[a] >= '0' && str[a] <= '9') {
		result = result * 10 + (str[a] - 48);
		a++;
	}
	return (result);
}
