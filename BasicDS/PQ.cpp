#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int>Q;
    Q.push(2);
    cout<<Q.top()<<'\n';// 2
    Q.push(5);
    cout<<Q.top()<<'\n';// 5
    Q.pop();
    cout<<Q.top()<<'\n';// 2
    Q.push(3);
    cout<<Q.top()<<'\n';// 3
}