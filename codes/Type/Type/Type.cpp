// Type.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <float.h>


int main()
{
    int a = 1;
    printf("a = %d, a = 0x%08X\n", a, a);

    float f_a;
    f_a = 3.0F;
    printf("f_a = %f, f_a = %e\n", f_a, f_a);

    double d_a;
    d_a = 5.0;
    printf("d_a = %f, d_a = %e\n", d_a, d_a);

    printf("%f, %e\n", FLT_EPSILON, FLT_EPSILON);

    printf("%f, %e\n", DBL_EPSILON, DBL_EPSILON);

    //unsigned int
    //char
    //short

    return 0;
}

