#include <stdio.h>
#include <string.h>

// Protótipo da sua função
char	*ft_strcapitalize(char *str);

int	main(void)
{
	int erros = 0;

	// Teste 1: O exemplo exato do PDF da 42
	char str1[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char expected1[] = "Hi, How Are You? 42words Forty-Two; Fifty+And+One";
	
	ft_strcapitalize(str1);
	if (strcmp(str1, expected1) != 0)
	{
		printf("[FALHA] Teste do PDF falhou!\n");
		printf("  Esperado: %s\n", expected1);
		printf("  Obtido:   %s\n", str1);
		erros++;
	}

	// Teste 2: Letras maiúsculas perdidas no meio da palavra (devem virar minúsculas)
	char str2[] = "hElLo WoRlD";
	char expected2[] = "Hello World";
	
	ft_strcapitalize(str2);
	if (strcmp(str2, expected2) != 0)
	{
		printf("[FALHA] Letras maiúsculas no meio não diminuíram!\n");
		printf("  Obtido: %s\n", str2);
		erros++;
	}

	// Teste 3: String vazia
	char str3[] = "";
	ft_strcapitalize(str3);
	if (strcmp(str3, "") != 0)
	{
		printf("[FALHA] String vazia quebrou a lógica.\n");
		erros++;
	}

	// Veredito
	if (erros == 0)
		printf("\033[0;32m[SUCESSO] ft_strcapitalize está impecável! Passou em tudo.\033[0m\n");
	else
		printf("\033[0;31m[ERRO] Foram encontradas %d falhas nos testes.\033[0m\n", erros);

	return (erros);
}