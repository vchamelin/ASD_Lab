#include <stdio.h>

float first(float x)
{
    return x * x * x - 5 * x * x;
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

    if (x >= -32)
    {
        if (x > 10)
            printf("Ответ: %f \n", second(x));
        else if (x <= 5)
        {
            if (x > 0)
                printf("Ответ: %f \n", first(x));
            else if (x < -20)
                printf("Ответ: %f \n", second(x));
            else
                printf("Не входит в ОДЗ \n");
        }
        else
            printf("Не входит в ОДЗ \n");
    }
    else
        printf("Не входит в ОДЗ \n");

    return 0;
}