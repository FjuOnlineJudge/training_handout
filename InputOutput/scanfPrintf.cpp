#include <cstdio>

int main()
{
    int i;
    scanf("%d", &i);
    printf("%d\n", i);
    double d;
    scanf("%lf", &d);
    printf("%lf\n", d);
    char c;
    scanf(" %c", &c);
    printf("%c\n", c);
    scanf("%d %lf %c", &i, &d, &c);
    printf("%d %lf %c\n", i, d, c);
}
