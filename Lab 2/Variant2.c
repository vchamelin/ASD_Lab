#include <stdio.h>
#include <math.h>

double res3(int n)
{
    double res3 = 1;
    double res2;
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        double res1 = i * i + 1;
        res2 += (i + sin(i));
        res3 *= res1 / res2;
        counter += 8;
    }
    printf("Performed: %d \n", counter);
    return res3;
};

int main()
{
    int n;

    printf("Write n: ");
    scanf("%d", &n);

    double P = res3(n);
    printf("Result: %lf \n", P);
    return 0;
}

//cd "/Users/vaceslav/Desktop/Учёба -_-/АСД/Лаба АСД/Lab_1_2_Amelin/" && gcc ASD_1_2_2.c -o ASD_1_2_2 && "/Users/vaceslav/Desktop/Учёба -_-/АСД/Лаба АСД/Lab_1_2_Amelin/"ASD_1_2_2
