void print_2d(int array[4][4]);

void    inputs(int array[4][4], int dicas[16])
{
    int i;
    int linha;
    int coluna;
    int div;

    i = 0;
    while (i < 16)
    {
        if (dicas[i] == 1)
        {
            div = i / 4;
            if (div == 0)
            {
                array[0][i] = 4;
            }
            if (div == 1)
            {
                array[3][i % 4] = 4;
            }
            if (div == 2)
            {
                array[i % 4][0] = 4;
            }
            if (div == 3)
            {
                array[i % 4][3] = 4;
            }
        }
        if (dicas[i] == 4)
        {
            div = i / 4;
            if (div == 0)
            {
                array[0][i] = 1;
                array[1][i] = 2;
                array[2][i] = 3;
                array[3][i] = 4;
            }
            if (div == 1)
            {
                array[0][i % 4] = 1;
                array[1][i % 4] = 2;              
                array[2][i % 4] = 3;
                array[3][i % 4] = 4;
            }
            if (div == 2)
            {
                array[i % 4][0] = 1;
                array[i % 4][1] = 2;              
                array[i % 4][2] = 3;
                array[i % 4][3] = 4;
            }
            if (div == 3)
            {
                array[i % 4][0] = 1;
                array[i % 4][1] = 2;              
                array[i % 4][2] = 3;
                array[i % 4][3] = 4;
            }
        }
        i++;
    }
    print_2d(array);
}