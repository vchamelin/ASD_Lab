#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double P = 1;
    int perf = 0;
    printf("Write n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double den = 0;
        double num = i * i + 1;
        for (int j = 1; j <= i; j++)
        {
            den += (j + sin(j));
            perf += 4;
        }
        P *= (num / den);
        perf += 5;
    }
    printf("Performed: %d \n", perf);
    printf("Result: %lf", P);
    return 0;
}

//cd "/Users/vaceslav/Desktop/Учёба -_-/АСД/Лаба АСД/Lab_1_2_Amelin/" && gcc ASD_1_2_1.c -o ASD_1_2_1 && "/Users/vaceslav/Desktop/Учёба -_-/АСД/Лаба АСД/Lab_1_2_Amelin/"ASD_1_2_1
