// PointerNArray.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

void PrintIntPointer(int* p, int index)
{
    printf("p[%d] = %d\n", index, p[index]);
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
        printf("a[%d] = %d\n", i, a[i]);
    }

    int* pA;
    pA = a;

    printf("a = %016X, pA = %016X\n", a, pA);
    printf("a = %016X, &(a[0]) = %016X\n", a, &(a[0]));

    printf("*a = %d, a[0] = %d\n", *a, a[0]);
    printf("*(a + 5) = %d, a[5] = %d\n", *(a+5), a[5]);

    PrintIntPointer(a, 9);
    
    return 0;
}

