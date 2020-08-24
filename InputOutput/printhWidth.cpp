#include <cstdio>

int main()
{
    int a = 25;
    printf("%2d\n", a);
    printf("%3d\n", a);
    printf("%4d\n", a);
    double b = 25.0;
    printf("%10f\n", b);
    printf("%11f\n", b);
    printf("%12f\n", b);
}

/*
25
 25
  25
 25.000000
  25.000000
   25.000000
*/