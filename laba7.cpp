#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int zad1();
int zad2();
int zad3();

int main(void)
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    zad1();
    zad2();
    zad3();

    return 0;
}

int zad1()
{
    char c;

    printf("Введите один символ: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;

    default:
        if (isalpha((unsigned char)c))
            printf("Это буква\n");
        else
            printf("Это не буква и не цифра\n");
        break;
    }

    return 0;
}
int zad2()
{
    float x, y;
    char c;

    printf("Введите выражение (например, 5+3): ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("Результат = %f\n", x + y);
        break;

    case '-':
        printf("Результат = %f\n", x - y);
        break;

    case '*':
        printf("Результат = %f\n", x * y);
        break;

    case '/':
        if (y != 0)
            printf("Результат = %f\n", x / y);
        else
            printf("Ошибка: деление на ноль!\n");
        break;
    case '^':
    {
        float result = 1;
        int i;

        if (y < 0 || y != (int)y)
        {
            printf("Для возведения в степень введите целое неотрицательное число.\n");
            break;
        }

        for (i = 0; i < (int)y; i++)
            result *= x;
        printf("Результат = %f\n", result);
        break;
    }

    default:
        printf("Неизвестная операция\n");
        break;
    }

    return 0;
}

int zad3()
{
    char figure;
    double a, b, S;

    printf("Выберите фигуру:\n");
    printf("t - треугольник\n");
    printf("s - квадрат\n");
    printf("o - круг\n");
    printf("r - прямоугольник\n");

    printf("Введите букву фигуры: ");
    scanf_s(" %c", &figure, 1);

    switch (figure)
    {
    case 't':
        printf("Введите основание треугольника: ");
        scanf_s("%lf", &a);

        printf("Введите высоту треугольника: ");
        scanf_s("%lf", &b);

        S = a * b / 2;
        printf("Площадь треугольника = %.2f\n", S);
        break;

    case 's':
        printf("Введите сторону квадрата: ");
        scanf_s("%lf", &a);

        S = a * a;
        printf("Площадь квадрата = %.2f\n", S);
        break;

    case 'o':
        printf("Введите радиус круга: ");
        scanf_s("%lf", &a);

        S = 3.141592653589793 * a * a;
        printf("Площадь круга = %.2f\n", S);
        break;

    case 'r':
        printf("Введите длину прямоугольника: ");
        scanf_s("%lf", &a);

        printf("Введите ширину прямоугольника: ");
        scanf_s("%lf", &b);

        S = a * b;
        printf("Площадь прямоугольника = %.2f\n", S);
        break;

    default:
        printf("Такой фигуры нет!\n");
        break;
    }

    return 0;
}