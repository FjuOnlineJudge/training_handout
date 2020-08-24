#include <cstdio>

int main()
{
    int a = 25;
    printf("%.2d\n", a);
    printf("%.3d\n", a);
    printf("%.4d\n", a);
    double b = 25.0;
    printf("%.3f\n", b);
    printf("%.4f\n", b);
    printf("%.5f\n", b);
}

/*
25
025
0025
25.000
25.0000
25.00000
*/