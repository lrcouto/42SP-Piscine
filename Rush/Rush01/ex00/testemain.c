#include <stdio.h>

int		input_check_um_coltop(char *dicas);

int		input_check_dois_coltop(char *dicas);

int		input_check_tres_coltop(char *dicas);

int		input_check_quatro_coltop(char *dicas);

int main(void)
{
	int result;

	result = input_check_um_coltop("1234");
	printf("1 certo = %d\n", result);
	result = input_check_um_coltop("3242");
	printf("1 errado = %d\n", result);

	result = input_check_dois_coltop("2221");
	printf("2 certo = %d\n", result);
	result = input_check_dois_coltop("2222");
	printf("2 errado = %d\n", result);

	result = input_check_tres_coltop("4331");
	printf("3 certo = %d\n", result);
	result = input_check_tres_coltop("3332");
	printf("3 errado = %d\n", result);

	result = input_check_quatro_coltop("4331");
	printf("4 certo = %d\n", result);
	result = input_check_quatro_coltop("3442");
	printf("4 errado = %d\n", result);

	return (0);
}
