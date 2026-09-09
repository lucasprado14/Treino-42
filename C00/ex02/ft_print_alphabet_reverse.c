#include <unistd.h>
void ft_print_alphabet_reverse(void)
{
    char c;
    
    c = 'z';
    while (c >= 'a')
    {        write(1, &c, 1);
        c--;     
    }   
}   

int main(void)
{
    ft_print_alphabet_reverse();
    return 0;
}   