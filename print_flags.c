#include "main.h"
/**
 * get_flags - Calculates active flags
 * sammy and edmond
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	int o, p;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (p = *i + 1; format[p] != '\0'; p++)
	{
		for (o = 0; FLAGS_CH[o] != '\0'; o++)
			if (format[p] == FLAGS_CH[o])
			{
				flags |= FLAGS_ARR[o];
				break;
			}

		if (FLAGS_CH[o] == 0)
			break;
	}

	*i = p - 1;

	return (flags);
}
