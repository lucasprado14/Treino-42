#include <stdio.h>
#include <string.h>

// Protótipo da sua função para a main conseguir enxergar
int	ft_strlen(char *str);

int	main(void)
{
	char *str1 = "Hello, 42!";
	char *str2 = "";
	char *str3 = "Uma frase bem mais longa para testar o contador.";

	printf("--- TESTE 1: String Normal ---\n");
	printf("Sua ft_strlen: %d\n", ft_strlen(str1));
	printf("strlen oficial: %lu\n\n", strlen(str1));

	printf("--- TESTE 2: String Vazia (Casos de borda) ---\n");
	printf("Sua ft_strlen: %d\n", ft_strlen(str2));
	printf("strlen oficial: %lu\n\n", strlen(str2));

	printf("--- TESTE 3: Frase Longa ---\n");
	printf("Sua ft_strlen: %d\n", ft_strlen(str3));
	printf("strlen oficial: %lu\n\n", strlen(str3));

	// Validação automática visual
	if (ft_strlen(str1) == (int)strlen(str1) &&
		ft_strlen(str2) == (int)strlen(str2) &&
		ft_strlen(str3) == (int)strlen(str3))
	{
		printf("\033[0;32m✅ TODOS OS TESTES PASSARAM COM SUCESSO!\033[0m\n");
	}
	else
	{
		printf("\033[0;31m❌ ALGO DEU ERRADO NOS TESTES!\033[0m\n");
	}

	return (0);
}