/* Validando 1 - Só pode ter um, não pode ter mais que um */

int		input_check_um_coltop(char *dicas)
{
	int counter;
	int quantos_uns;
	int valid;

	counter = 0;
	quantos_uns = 0;
	valid = 0;
	while (counter < 4)
	{
		if (dicas[counter] == '1')
		{
			quantos_uns++;
		}
		counter++;
	}
	if (quantos_uns !=  1)
	{
		valid = 1;
	}
	return (valid);
}

/* Validando 2 - No máximo 3 */

int		input_check_dois_coltop(char *dicas)
{
	int counter;
	int quantos_dois;
	int valid;

	counter = 0;
	quantos_dois = 0;
	valid = 0;
	while (counter < 4)
	{
		if (dicas[counter] == '2')
		{
			quantos_dois++;
		}
		counter++;
	}
	if (quantos_dois > 3)
	{
		valid = 1;
	}
	return (valid);
}

/* Validando 3 - No máximo 2 */

int		input_check_tres_coltop(char *dicas)
{
	int counter;
	int quantos_tres;
	int valid;

	counter = 0;
	quantos_tres = 0;
	valid = 0;
	while (counter < 4)
	{
		if (dicas[counter] == '3')
		{
			quantos_tres++;
		}
		counter++;
	}
	if (quantos_tres > 2)
	{
		valid = 1;
	}
	return (valid);
}

/* Validando 4 - No máximo 1 */

int		input_check_quatro_coltop(char *dicas)
{
	int counter;
	int quantos_quatros;
	int valid;

	counter = 0;
	quantos_quatros = 0;
	valid = 0;
	while (counter < 4)
	{
		if (dicas[counter] == '4')
		{
			quantos_quatros++;
		}
		counter++;
	}
	if (quantos_quatros > 1)
	{
		valid = 1;
	}
	return (valid);
}
