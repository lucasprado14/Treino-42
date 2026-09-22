// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

char    *ft_strrev(char *str)
{
    int     i;
    int     last;
    char    temp;

    i = 0;

    while (str[i])
        i++;

    last = i - 1;
    i = 0;
    while (last > i)
    {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;
        i++;
        last--;
    }
    return (str);
}
