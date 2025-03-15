#include <stdio.h>

void espiral(int dim, int mat[][dim])
{
    int top = 0, bottom = dim - 1;
    int left = 0, right = dim - 1;

    while (top <= bottom && left <= right)
    {

        for (int i = left; i <= right; i++)
            printf("%d ", mat[top][i]);
        top++;

        for (int i = top; i <= bottom; i++)
            printf("%d ", mat[i][right]);
        right--;

        for (int i = right; i >= left && top <= bottom; i--)
            printf("%d ", mat[bottom][i]);
        bottom--;

        for (int i = bottom; i >= top && left <= right; i--)
            printf("%d ", mat[i][left]);
        left++;
    }
}

int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}};

    espiral(4, matrix);
    return 0;
}