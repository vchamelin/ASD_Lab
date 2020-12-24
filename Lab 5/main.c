#include <stdio.h>

#define M 9
#define N 8

int matrix[M][N] = {
    {6, 3, 5, 4, 6, 1, 9, 3},
    {2, 4, 7, 9, 2, 6, 1, 5},
    {4, 1, 6, 3, 1, 7, 8, 2},
    {1, 0, -3, 2, 3, 5, 7, 1},
    {-1, 6, 3, 1, 4, 4, 1, 0},
    {7, 8, 5, 4, 3, 5, 4, 4},
    {1, 7, 5, 2, 2, 6, 3, 6},
    {0, 9, 4, 1, 1, 2, 9, 7},
    {9, 0, 4, 0, 0, 3, 7, 1},
};

void print()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sort()
{
    int num;
    for (int i = 1; i < M; i++)
    {
        for (int j = 1; j < N; j++)
        {
            for (int k = j; k > 0; k--)
            {
                if (matrix[i][k] > matrix[i][k - 1])
                {
                    num = matrix[i][k];
                    matrix[i][k] = matrix[i][k - 1];
                    matrix[i][k - 1] = num;
                }
                else
                    break;
            }
        }
    }
}

int main()
{
    printf("Matrix before: \n");
    print();
    sort();
    printf("\nMatrix after: \n");
    print();
    return 0;
}
