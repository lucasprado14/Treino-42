#include <stdio.h>

// Dizemos ao compilador que a sua função existe em outro arquivo
int	ft_str_is_numeric(char *str);

int	main(void)
{
	int erros = 0;

	// Teste 1: Apenas números (Deve retornar 1)
	if (ft_str_is_numeric("1234567890") != 1)
	{
		printf("[FALHA] '1234567890' deveria retornar 1\n");
		erros++;
	}

	// Teste 2: Misturado com letras (Deve retornar 0)
	if (ft_str_is_numeric("42piscine") != 0)
	{
		printf("[FALHA] '42piscine' deveria retornar 0\n");
		erros++;
	}

	// Teste 3: String vazia (Regra do PDF: Deve retornar 1)
	if (ft_str_is_numeric("") != 1)
	{
		printf("[FALHA] String vazia '' deveria retornar 1\n");
		erros++;
	}

	// Teste 4: Sinais ou espaços (Deve retornar 0)
	if (ft_str_is_numeric("123 45") != 0)
	{
		printf("[FALHA] '123 45' com espaço deveria retornar 0\n");
		erros++;
	}

	// Veredito Final do seu teste unitário
	if (erros == 0)
		printf("\033[0;32m[SUCESSO] Código perfeito! Todos os testes passaram.\033[0m\n");
	else
		printf("\033[0;31m[ERRO] Foram encontradas %d falhas nos testes.\033[0m\n", erros);

	return (erros);
}