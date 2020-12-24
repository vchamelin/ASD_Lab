#include <stdio.h>

#define m 9
#define n 8

int matrix[m][n] = {
    {0, 3, 6, 9, 12, 16, 19, 23},
    {0, 3, 6, 9, 12, 16, 19, 23},
    {0, 3, 6, 8, 12, 16, 19, 22},
    {-1, 3, 5, 8, 12, 15, 18, 21},
    {-1, 3, 5, 8, 11, 14, 18, 21},
    {-1, 3, 5, 8, 11, 14, 18, 21},
    {-1, 3, 5, 7, 11, 14, 17, 21},
    {-2, 3, 4, 7, 10, 14, 17, 21},
    {-2, 3, 4, 7, 10, 13, 17, 20},
};

int main()
{
    int num, col = 0;
    printf("Please give your number : ");
    scanf("%d", &num);

    while (col < n)
    {
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (matrix[mid][col] == num)
            {
                int mid1 = mid;
                while (matrix[mid1][col] == num)
                {
                    mid1--;
                }
                mid1++;
                printf("Your number on coord [%d, %d]\n", col, mid1);
                break;
            }
            else if (matrix[mid][col] > num)
            {
                low = mid + 1;
            }
            else if (matrix[mid][col] < num)
            {
                high = mid - 1;
            }
        }
        col++;
    }
    for (int R = 0; R < m; R++)
    {
        for (int C = 0; C < n; C++)
        {
            printf("%d ", matrix[R][C]);
        }
        printf("\n");
    }
    return 0;
}
