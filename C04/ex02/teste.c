#include <unistd.h>

// Declaração do protótipo da sua função para o compilador conhecer
void	ft_putnbr(int nb);

// Função auxiliar para quebrar linha entre os testes no terminal
void	ft_putnewline(void)
{
	write(1, "\n", 1);
}

int	main(void)
{
	write(1, "--- INICIO DOS TESTES --- \n\n", 28);

	write(1, "1. Teste Positivo Simples (42): ", 32);
	ft_putnbr(42);
	ft_putnewline();

	write(1, "2. Teste Zero (0): ", 19);
	ft_putnbr(0);
	ft_putnewline();

	write(1, "3. Teste Negativo (-42): ", 25);
	ft_putnbr(-42);
	ft_putnewline();

	write(1, "4. Teste Maior Int / INT_MAX (2147483647): ", 43);
	ft_putnbr(2147483647);
	ft_putnewline();

	write(1, "5. Teste Menor Int / INT_MIN (-2147483648): ", 44);
	ft_putnbr(-2147483648);
	ft_putnewline();

	write(1, "6. Teste Vários Dígitos (100009): ", 34);
	ft_putnbr(100009);
	ft_putnewline();

	write(1, "\n--- FIM DOS TESTES --- \n", 25);
	return (0);
}