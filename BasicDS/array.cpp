#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,5>a;

    cout<<a.size()<<'\n';

    for(int i=0;i<a.size();i++){
        a[i]=i*i;
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}
/*
5
0 1 4 9 16
*/