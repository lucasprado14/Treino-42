#include <unistd.h>

// Protótipo da sua função
void	ft_putstr(char *str);

int	main(void)
{
	// 1. Teste com string normal
	write(1, "--- TESTE 1: String Normal ---\n", 31);
	ft_putstr("Hello, 42 Network!\n");
	write(1, "\n", 1);

	// 2. Teste com caracteres especiais e números
	write(1, "--- TESTE 2: Caracteres e Números ---\n", 39);
	ft_putstr("Teste 123! @#$%^&*()\n");
	write(1, "\n", 1);

	// 3. Teste com string vazia (não deve imprimir nada)
	write(1, "--- TESTE 3: String Vazia (Não deve imprimir nada abaixo) ---\n", 63);
	ft_putstr("");
	write(1, "\n\n", 2);

	return (0);
}