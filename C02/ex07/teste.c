#include <stdio.h>
#include <string.h> // Usado apenas no teste para comparar strings com strcmp

// Avisa o compilador sobre a sua função
char	*ft_strupcase(char *str);

int	main(void)
{
	int erros = 0;

	// Teste 1: Letras minúsculas normais
	char str1[] = "marvin42";
	ft_strupcase(str1);
	if (strcmp(str1, "MARVIN42") != 0)
	{
		printf("[FALHA] 'marvin42' deveria virar 'MARVIN42', mas ficou: '%s'\n", str1);
		erros++;
	}

	// Teste 2: Texto misturado e com símbolos
	char str2[] = "!@# Hello World 42 #@!";
	ft_strupcase(str2);
	if (strcmp(str2, "!@# HELLO WORLD 42 #@!") != 0)
	{
		printf("[FALHA] Símbolos/espaços mudaram incorretamente: '%s'\n", str2);
		erros++;
	}

	// Teste 3: String vazia
	char str3[] = "";
	ft_strupcase(str3);
	if (strcmp(str3, "") != 0)
	{
		printf("[FALHA] String vazia quebrou o código\n");
		erros++;
	}

	// Veredito final
	if (erros == 0)
		printf("\033[0;32m[SUCESSO] Código perfeito! Tudo mudou para MAIÚSCULO.\033[0m\n");
	else
		printf("\033[0;31m[ERRO] Foram encontradas %d falhas nos testes.\033[0m\n", erros);

	return (erros);
}