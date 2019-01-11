#include <iostream> 
using namespace std; 

void count(); 

int main() { 

    for(int i = 0; i < 10; i++) 
        count(); 

    return 0; 
} 

void count() { 
    static int c = 1; 
    cout << c << endl; 
    c++; 
}
/*
1
2
3
4
5
6
7
8
9
10 
 */