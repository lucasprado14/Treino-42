#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	// Teste 1: O exemplo oficial do PDF
	printf("--- TESTE 1: Exemplo do PDF ---\n");
	printf("Esperado: Hello\\0aHow are you?\nObtido:   ");
	ft_putstr_non_printable("Hello\nHow are you?");
	printf("\n\n");

	// Teste 2: Vários caracteres de controle misturados
	printf("--- TESTE 2: Controles misturados ---\n");
	// \t é tab (9), \v é tab vertical (11), \a é bip (7)
	printf("Esperado: Teste\\09com\\0bvarios\\07controles\nObtido:   ");
	ft_putstr_non_printable("Teste\tcom\vvarios\acontroles");
	printf("\n\n");

	// Teste 3: Apenas caracteres normais
	printf("--- TESTE 3: Apenas normais ---\n");
	printf("Esperado: Piscine 42\nObtido:   ");
	ft_putstr_non_printable("Piscine 42");
	printf("\n");

	return (0);
}