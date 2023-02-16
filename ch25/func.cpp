#include "func.h"
#include <stdio.h>
#include "common.h"



int Add(int a, int b) {
    printf("g_iStatic의 값은 : %d\n", g_iStatic);
    printf("g_iStatic의 값은 : %d\n", g_iExtern);
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}