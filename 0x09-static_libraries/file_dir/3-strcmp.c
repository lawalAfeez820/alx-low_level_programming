#include "main.h"
#include <string.h>
int f_greater(char *s1, char *s2);
int s_greater(char *s1, char *s2);
int equal(char *s1, char *s2);

/**
 * _strcmp - compare to string together
 * @s1:first string
 * @s2: second string
 *
 * Author: LAWAL AFEEZ
 * Return: 0 if equal , > 0 if s1 > s2 and < 0 if first non matching character
 * in s2 is greater than s1
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);

	if (len_s1 > len_s2)
		return (f_greater(s1, s2));
	else if (len_s2 > len_s1)
		return (s_greater(s1, s2));
	else
		return (equal(s1, s2));
}

/**
 *f_greater - run if string 1 is greater than string 2
 *@s1: first string
 *@s2: second  string
 *
 *Return: int
 */
int f_greater(char *s1, char *s2)
{
	int i;
	int len_s2 = strlen(s2);

	for (i = 0; i < len_s2; i++)
	{
		if (s2[i] > s1[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s2[i] == s1[i])
		{
			continue;
		}
		else
		{
			return (s2[i] - s1[i]);
		}
	}
	return (s2[i] - s1[i]);
}

/**
 * s_greater - run if lenght of second string is greter than that of the first
 *@s1: first string
 *@s2: second string
 *
 * Return: int
 */
int s_greater(char *s1, char *s2)
{
	int i;
	int len_s1 = strlen(s1);

	for (i = 0; i < len_s1; i++)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return (s2[i] - s1[i]);
		}
	}
	return (s2[i] - s1[i]);
}

/**
 * equal - run if the two trings are equal
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int equal(char *s1, char *s2)
{
	int i;
	int len_s1 = strlen(s1);

	for (i = 0; i < len_s1; i++)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return (s2[i] - s1[i]);
		}
	}
	return (s2[i] - s1[i]);
}


