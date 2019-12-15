int		soma_colunas(int dicas[16])
{
	int i;
	int num1;
	int num2;

	num1 = 0;
	num2 = 0;	
	i = 0;
	while (i < 4)
	{
		num1 = dicas[i];
		num2 = dicas[i + 4];
		if ((num1 + num2) < 3 || (num1 + num2) > 5)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		soma_linhas(int dicas[16])
{
	int i;
	int num1;
	int num2;

	num1 = 0;
	num2 = 0;
	i = 8;
	while (i < 11)
	{
		num1 = dicas[i];
		num2 = dicas[i + 4];
		if ((num1 + num2) < 3 || (num1 + num2) > 5)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		soma_tudo(int dicas[16])
{
	int soma;
	int cont;
	int inicial;
	int final;

	cont = 1;
	inicial = 0;
	final = 3;
	while (cont <= 4)
	{
		soma = 0;
		while (inicial <= final)
		{
			soma += dicas[inicial];
			inicial++;
		}
		final += 4;
		if (soma < 7 || soma > 11)
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

int	testes_duplas(int array[4][4], int dicas[16])
{
	int resposta;

	resposta = 0;
	if (soma_colunas(dicas) == 1 && soma_linhas(dicas) == 1)
	{
		resposta += 1;
	}
	else
	{
		resposta += 0;
	}
	if (soma_tudo(dicas) == 1)
	{
		resposta += 1;
	}
	else
	{
		resposta += 0;
	}
	return (resposta);
}
