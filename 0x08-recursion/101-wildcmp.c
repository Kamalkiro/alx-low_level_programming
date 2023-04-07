#include "main.h"
/**
 * wildcmp - comparing strings
 * @s1:string point
 * @s2:other string pointer
 * Return: 1 or 0 depending if identical or not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);

		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (0);
	}
	if (*s2 == '*')
	{
	if (wildcmp(s1, s2 + 1))
		return (1);
	if (*s1 != '\0' && wildcmp(s2, s1 + 1))
		return (1);
	return (0);
	}
	else if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
