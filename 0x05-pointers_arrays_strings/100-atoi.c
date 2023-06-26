#include "main.h"

/**
 * _atoi - converts a string to an integer
 * The no in the string can be preceded by an infinite no of characters.
 * Take into account the '-' and '+' signs.
 * @s: pointer to the input string
 * Return: converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	result *= sign;
		return (result);
}
