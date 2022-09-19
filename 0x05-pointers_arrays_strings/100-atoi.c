#include "main.h"
int _pow(int a, int b);
int _strlen(char *s);

/**
 * _atoi: convert sting to int
 * @s: string to be converted
 *Return: integer output
 */
int _atoi(char *s)
{
    int i;
    int k;
    int final = 0;
    int count = 0;
    int track = 0;
    int total = 0;
    int first;

    if (_strlen(s) > 0)
    {
    
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
            {
                count = i;
                track = track + 1;
            }
        if ( i > count && track > 0)
            break;
    }
    first = count - track;
    final = count;
    track = track - 1;
    for (k = first; k < final; k++)
    {
        total = total + ((s[k] - 48) * _pow(10,track));
        track = track - 1;
    }
    if (final == _strlen(s) && s[first-1] == 45 && first)
        return (-1 * total);
    else
        return (total);
    }
    else
        return (0);
}

int _strlen(char *s)
{
    int i;
    int count = 0;
    
    for (i = 0; s[i]; i++)
        count = count + 1;
    return (count);
}

int _pow(int a, int b)
{
    int i;
    int sum = a;
    
    if (b == 0)
        return (1);
    elif (b == 1)
        return (a);
    else
    {
        for (i = 1; i < b ; i++)
        {
                sum = sum * a;
        }
        return (sum);
    }
}


