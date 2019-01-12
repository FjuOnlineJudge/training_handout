#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';
    v.clear();

    v.resize(2);
    cout<<v.size()<<'\n';

    for(int i=0;i<v.size();i++){
    v[i]=5-i;
    }
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<' ';
    }
    cout<<'\n';
}
/*
1 2 3
2
5 4
*/