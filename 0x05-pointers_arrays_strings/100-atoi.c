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
    int track2;

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
    if (i > count)
    {
        first = i - track;
    }
    else if (i == count)
    {
        first = i - track + 1;
    }
    final = count;
    track2 = track;
    track = track - 1;
    for (k = first; k <= final; k++)
    {
        total = total + ((s[k] - 48) * _pow(10,track));
        track = track - 1;
    }
    if (track2 + 1 == _strlen(s))
        return (-1 * total);
    else if (count == i && s[i - track2] == '-')
        return (-1 * total);
    else if (count == i && s[i - track2] == '+' && s[i - track2 - 1] == '-')
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
    else if (b == 1)
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


