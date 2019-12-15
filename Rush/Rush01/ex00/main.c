#include <unistd.h>

int		testes_duplas(char array[4][4],char dicas[4][4]);
int		teste_combinacoes(char dicas[4][4]);
void	inputs(char array[4][4], char dicas[4][4]);
void 	niciais(char array[4][4], char dicas[4][4]);
void 	print_2d(char array[4][4]);

void	iniciais(char array[4][4], char dicas[4][4])
{
	int i_linha;
	int i_coluna;

	i_linha = 0;
	while (i_linha < 4)
	{
		i_coluna = 0;
		while (i_coluna < 4)
		{
			array[i_linha][i_coluna] = 0;
			i_coluna++;
		}
		i_linha++;
	}
//	inputs(array, dicas);
}

void	print_2d(char array[4][4])
{
	int i_linha;
	int i_coluna;

	i_linha = 0;
	while (i_linha < 4)
	{
		i_coluna = 0;
		while (i_coluna < 4)
		{
			write(1, &array[i_linha][i_coluna], 1);
			write(1, " ", 1);
			i_coluna++;
		}
		printf("\n");
		i_linha++;
	}
}

int		formar_dicas(char **argv, char dicas[4][4])
{
	int numeros;
	int i;
	int coluna_dicas;
	int linha_dicas;

	linha_dicas = 0;
	coluna_dicas = 0;
	i = 0;
	while (linha_dicas < 4)
	{
		coluna_dicas = 0;
		while (coluna_dicas < 4)
		{
			if (argv[1][i] >= '1' && argv[1][i] <= '4')
			{
				dicas[linha_dicas][coluna_dicas] = argv[1][i];
				coluna_dicas++;
			}
			i++;
		}
		linha_dicas++;
	}
	if (i != 31)
	{
		return (0);
	}
	print_2d(dicas);
	return (1);
}

int		main(int argc, char **argv)
{
	char array[4][4];
	char dicas[4][4];
	int i_linha;
	int i_coluna;
	int i;

	i_linha = 0;
	i_coluna = 0;
	i = 0;
	if (formar_dicas(argv, dicas) == 1 && testes_duplas(array, dicas) == 2)
	{
 		if (1 == 1)
		{
			iniciais(array, dicas);
		}
		else
		{
			write(1, "Error!", 1);
		}	 
	}
	else
	{
		write(1, "Error!", 1);
	}
}
