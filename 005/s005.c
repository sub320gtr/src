/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include <math.h>

int s005(float a, float b) {
    int r;
    r = (int) a/b;
    r = a - (float) r*b;
    return r;
}
