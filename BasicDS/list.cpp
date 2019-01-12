// adapt from cppreference
#include <iostream>
#include <list>
 
int main(){
    std::list<char> letters {'o', 'm', 'g', 'w', 't', 'f'};
 
    if (!letters.empty()) {
        cout << letters.front() << '\n';// o
        cout << letters.back() << '\n'; // f
    }  
}