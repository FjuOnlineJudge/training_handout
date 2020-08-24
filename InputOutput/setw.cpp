#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 100;
    cout << setw(4) << a << '\n';
    cout << setw(5) << a << '\n';
    cout << setw(6) << a << '\n';
    double d = 1.414;
    cout << setw(4) << d << '\n';
    cout << setw(5) << d << '\n';
    cout << setw(6) << d << '\n';
}

/*
 100
  100
   100
1.414
1.414
 1.414
*/
