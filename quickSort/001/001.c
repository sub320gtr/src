/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "001.h"


void start (void) {
    int i; // индексы
    int n; // размер массива
    printf("Введите размер массива: ");
    scanf("%d", &n);
    int m[n];
    int *mas = m;
    srand(time(NULL)); // функция для "случайного" массива
    printf("Сгенерированный массив:\n");
    for (i = 0; i < n; i++) {  // формирование случайного вектора
        *(mas+i) = rand() % 100; // диапазон случайных чисед от 0 до 100
        printf("%d ", *(mas+i));
    }
    quickSort(m,n);
    printf("\n Отсортированный массив \n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(mas+i));
    }
}
