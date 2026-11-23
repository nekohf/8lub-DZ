#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    double sum = 0.0;
    printf("Введите целое число n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int d = 2 * i + 1;
        sum += 1.0 / (d * d);
    }
    printf("Сумма ряда для n = %d равна: %f\n", n, sum);
    return 0;
}