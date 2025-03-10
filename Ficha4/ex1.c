#include <stdio.h>

void printMat(int nLin, int nCol, int m[][nCol])
{
    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j < nCol; j++)
            printf("%3d ", m[i][j]);

        printf("\n");
    }
}

int main()
{
    // Test matrix with different values
    int mat[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    printf("Matrix 3x4:\n");
    printMat(3, 4, mat);

    // Test another matrix with different dimensions
    int mat2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    printf("\nMatrix 2x3:\n");
    printMat(2, 3, mat2);

    return 0;
}