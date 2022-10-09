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

void quickSort();
void start (void) {
    int i; // индекс
    int n; // размер массива
    int p; // индекс опопрного элемента
    printf("Введите размер массива: ");
    scanf("%d", &n);
    int mas[n];
    srand(time(NULL));
    printf("Сгенерированный массив:\n");
    for (i = 0; i < n; i++) {
        mas[i] = rand() % 100; // диапазон случайных чисед от 0 до 100
        printf("%d ", mas[i]);
    }
    p = (int) n/2;
    printf("\n%d ", p);
}
