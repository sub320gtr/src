/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include <math.h>

void start (void) {
    /// Задаем переменные
    int a,b;
    printf("\nВведите первую цифру числа  ");
    scanf("%d",&a);
    if (a>0 && a<10) {
          b = a*100 + 90 + (9-a);
          printf("\nИскомое число: %d", b);
    }
    else {
            printf("Данные введены неверно, попробуйте заново: ");
            start();
        }
    return;
    // Решение
}
