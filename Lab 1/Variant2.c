#include <stdio.h>

float first(float x)
{
    return (x * x * x - 5 * x * x);
}

float second(float x)
{
    return x * x - 3;
}

int main()
{
    float x;
    printf("Введите значение x: ");
    scanf("%f", &x);

    if ((x >= -32 && x < -20) || (x > 10))
        printf("Ответ: %f \n", second(x));
    else if ((x > 0) && (x <= 5))
        printf("Ответ: %f \n", first(x));
    else
        printf("Число не входит в ОДЗ \n");

    return 0;
}

