#include <cstdio>

int main()
{
    int a = 25;
    printf("%*d\n", 2, a);
    printf("%*d\n", 3, a);
    printf("%*d\n", 4, a);
    double b = 25.0;
    printf("%*f\n", 10, b);
    printf("%*f\n", 11, b);
    printf("%*f\n", 12, b);
}

/*
25
 25
  25
 25.000000
  25.000000
   25.000000
*/