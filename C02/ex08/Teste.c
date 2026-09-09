#include <stdio.h>
#include <string.h> // Usamos o strcmp aqui apenas para comparar o resultado final

// Avisa o compilador sobre a existência da sua função
char	*ft_strlowcase(char *str);

int	main(void)
{
	int erros = 0;

	// Teste 1: Letras maiúsculas normais (Devem virar minúsculas)
	char str1[] = "MARVIN42";
	ft_strlowcase(str1);
	if (strcmp(str1, "marvin42") != 0)
	{
		printf("[FALHA] 'MARVIN42' deveria virar 'marvin42', mas ficou: '%s'\n", str1);
		erros++;
	}

	// Teste 2: Texto misturado e com símbolos (Apenas as maiúsculas devem mudar)
	char str2[] = "!@# HELLO world 42 #@!";
	ft_strlowcase(str2);
	if (strcmp(str2, "!@# hello world 42 #@!") != 0)
	{
		printf("[FALHA] Símbolos/espaços mudaram incorretamente: '%s'\n", str2);
		erros++;
	}

	// Teste 3: String vazia (Regra do PDF: não deve quebrar nem fazer nada)
	char str3[] = "";
	ft_strlowcase(str3);
	if (strcmp(str3, "") != 0)
	{
		printf("[FALHA] String vazia quebrou o código ou alterou algo\n");
		erros++;
	}

	// Veredito final impresso com cores no terminal
	if (erros == 0)
		printf("\033[0;32m[SUCESSO] Código perfeito! Tudo mudou para minúsculo.\033[0m\n");
	else
		printf("\033[0;31m[ERRO] Foram encontradas %d falhas nos testes.\033[0m\n", erros);

	return (erros);
}