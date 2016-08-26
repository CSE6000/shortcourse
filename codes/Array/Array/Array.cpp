// Array.cpp : Defines the entry point for the console application.
//

#include <stdio.h>


int main()
{

    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = i * 2;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    double v_a[10];
    double v_b[10];
    double v_c[10];

    for (int i = 0; i < 10; i++)
    {
        v_a[i] = 1;
        v_b[i] = 2;
        v_c[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        v_c[i] = v_a[i] + v_b[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("v_c[%d] = %f\n", i, v_c[i]);
    }

    return 0;
}

