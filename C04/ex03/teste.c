#include <stdio.h>
#include <stdlib.h> // Para comparar com o atoi padrão da C

int	ft_atoi(char *str);

int	main(void)
{
	printf("=========================================\n");
	printf("         TESTES UNITÁRIOS: ft_atoi       \n");
	printf("=========================================\n\n");

	// Teste 1: Exemplo oficial da folha do exercício
	char *t1 = "   ---+--+1234ab567";
	printf("Test 1 (PDF): \"%s\"\n", t1);
	printf("-> ft_atoi: %d (Esperado: -1234)\n\n", ft_atoi(t1));

	// Teste 2: Espaços e tabs antes do número
	char *t2 = " \t\n\v\f\r 42";
	printf("Test 2 (Whitespaces): \" \\t\\n\\v\\f\\r 42\"\n");
	printf("-> ft_atoi: %d | atoi real: %d\n\n", ft_atoi(t2), atoi(" 42"));

	// Teste 3: Múltiplos sinais (Sinal par = positivo)
	char *t3 = " --42";
	printf("Test 3 (Dois menos = positivo): \"%s\"\n", t3);
	printf("-> ft_atoi: %d (Esperado: 42)\n\n", ft_atoi(t3));

	// Teste 4: Começa com letras (deve retornar 0)
	char *t4 = "salut123";
	printf("Test 4 (Texto antes): \"%s\"\n", t4);
	printf("-> ft_atoi: %d | atoi real: %d\n\n", ft_atoi(t4), atoi(t4));

	// Teste 5: Sinal no meio dos números (deve parar no primeiro caractere não-numérico)
	char *t5 = "123+456";
	printf("Test 5 (Sinal no meio): \"%s\"\n", t5);
	printf("-> ft_atoi: %d | atoi real: %d\n\n", ft_atoi(t5), atoi(t5));

	// Teste 6: String vazia
	char *t6 = "";
	printf("Test 6 (String vazia): \"%s\"\n", t6);
	printf("-> ft_atoi: %d | atoi real: %d\n\n", ft_atoi(t6), atoi(t6));

	return (0);
}