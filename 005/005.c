/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include <math.h>
#include "005.h"

void start (void) {
    /// Задаем переменные
    float a,b;
    int r;
    printf("\nВведите число:  ");
    scanf("%f",&a);
    printf("\nВведите разрядность системы счисления:  ");
    scanf("%f",&b);
    if (a>0) {
          r = s005(a,b);
          printf("\nИскомое число: %d", r);
    }
    else {
            printf("Данные введены неверно, попробуйте заново: ");
            start();
        }
    return;
    // Решение
}
