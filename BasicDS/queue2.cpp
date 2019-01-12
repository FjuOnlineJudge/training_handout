#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>st;
    st.push(1);
    cout<<st.front()<<'\n';// 1
    st.push(2);
    cout<<st.front()<<'\n';// 1
    st.push(3);
    cout<<st.front()<<'\n';// 1
    st.pop();
    cout<<st.front()<<'\n';// 2
}