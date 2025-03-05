int unicos(int mat[][3], int nLin)
{
    for (int i = 0; i < nLin; i++)
        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k < 3; k++)
                if (mat[i][j] == mat[i][k])
                    return 0;
            for (int k = i + 1; k < nLin; k++)
                for (int l = 0; l < 3; l++)
                    if (mat[i][j] == mat[k][l])
                        return 0;
        }
}