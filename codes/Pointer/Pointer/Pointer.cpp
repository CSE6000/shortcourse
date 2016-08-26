// Pointer.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    int a = 0;
    printf("a = %d, &a = %#X\n", a, &a);

    int* pB;
    pB = (int*)malloc(sizeof(int));
    *pB = 1;
    printf("pB = %#X, &pB = %#X, *pB = %d, &(*pB) = %#X\n",  pB, &pB, *pB, &(*pB));

    float fa;
    fa = 3.0F;
    printf("fa = %f, &fa = %#X\n", fa, &fa);

    float* pFb;
    pFb = (float*)malloc(sizeof(float));
    *pFb = 2.0F;
    printf("c = %#X, *c = %f\n", pFb, *pFb);
    
    return 0;
}

