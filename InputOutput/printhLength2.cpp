#include <cstdio>

int main()
{
    int a = 25;
    printf("%.*d\n", 1, a);
    printf("%.*d\n", 2, a);
    printf("%.*d\n", 3, a);
    printf("%.*d\n", 4, a);
    double b = 25.0;
    printf("%.*f\n", 3, b);
    printf("%.*f\n", 4, b);
    printf("%.*f\n", 5, b);
}

/*
25
25
025
0025
25.000
25.0000
25.00000
*/