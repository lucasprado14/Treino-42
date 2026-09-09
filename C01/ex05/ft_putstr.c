#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    
}

int main (void)
{
    char *frase = "Frase aleatória";

    ft_putstr(frase);
    
    write(1, "\n", 1);
    return(0);
}