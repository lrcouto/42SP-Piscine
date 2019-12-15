int     cont_ocorrencias(int dicas[16], int numero)
{
    int cont;
    int i;

    cont = 0;
    while (i < 16)
    {
        if (dicas[i] == numero)
        {
            cont++;
        }
        i++;
    }
    return (cont);
}