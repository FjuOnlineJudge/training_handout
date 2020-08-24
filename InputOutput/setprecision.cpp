#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 100;
    double d = 1.414;
    cout << setprecision(4) << a << '\n';
    cout << setprecision(5) << a << '\n';
    cout << setprecision(6) << a << '\n';

    cout << setprecision(4) << d << '\n';
    cout << setprecision(5) << d << '\n';
    cout << setprecision(6) << d << '\n';

    cout << fixed;
    cout << setprecision(4) << a << '\n';
    cout << setprecision(5) << a << '\n';
    cout << setprecision(6) << a << '\n';

    cout << setprecision(4) << d << '\n';
    cout << setprecision(5) << d << '\n';
    cout << setprecision(6) << d << '\n';

    cout << scientific;
    cout << setprecision(4) << a << '\n';
    cout << setprecision(5) << a << '\n';
    cout << setprecision(6) << a << '\n';

    cout << setprecision(4) << d << '\n';
    cout << setprecision(5) << d << '\n';
    cout << setprecision(6) << d << '\n';
}

/*
100
100
100
1.414
1.414
1.414
100
100
100
1.4140
1.41400
1.414000
100
100
100
1.4140e+00
1.41400e+00
1.414000e+00
*/
