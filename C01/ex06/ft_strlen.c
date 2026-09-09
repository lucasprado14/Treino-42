#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main (void)
{
    char *frase;
    int tamanho;

    frase = "Contando caracteres";

    tamanho = ft_strlen (frase);
    
    printf("O número de caracteres é: %d\n", tamanho);
    return(0);  
}