int     testes_um(int dicas[16])
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (dicas[i] == 1 && dicas[i + 4] <= 1)
        {
            return (0);
        }
        i++;
    }
    i = 8;
    while (i < 12)
    {
        if (dicas[i] == 1 && dicas[i + 4] <= 1)
        {
            return (0);
        }
        i++;
    }
    return (1);
} 

int     testes_dois(int dicas[16])
{

    int i;

    i = 0;
    while (i < 4)
    {
        if (dicas[i] == 2 && dicas[i + 4] < 4)
        {
            return (0);
        }
        i++;
    }
    i = 8;
    while (i < 12)
    {
        if (dicas[i] == 2 && dicas[i +4] < 4)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int     testes_tres(int dicas[16])
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (dicas[i] == 3 && dicas[i + 4] > 3)
        {
            return (0);
        }
        i++;
    }
    i = 8;
    while (i < 12)
    {
        if (dicas[i] == 3 && dicas[i + 4] > 3)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int     testes_quatro(int dicas[16])
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (dicas[i] == 3 && dicas[i + 4] == 1)
        {
            return (0);
        }
        i++;
    }
    i = 8;
    while (i < 12)
    {
        if (dicas[i] == 3 && dicas[i + 4] == 1)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int     teste_combinacoes(int dicas[16])
{
    int i;

    i = 0;
     while (i < 4)
    {
        if (testes_um(dicas) == 1)
        {
            return (0);
        }
          if (testes_um(dicas) == 1)
        {
            return (0);
        }
        if (testes_um(dicas) == 1)
        {
            return (0);
        }
        if (testes_um(dicas) == 1)
        {
            return (0);
        }
        i++;
    } 
    return (1);
}
