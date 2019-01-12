#include <iostream>
#include <stack>
using namespace std;
  
int main(){
    stack<int>st;
    st.push(1);
    cout<<st.top()<<'\n';// 1
    st.push(2);
    cout<<st.top()<<'\n';// 2
    st.push(3);
    cout<<st.top()<<'\n';// 3
    st.pop();
    cout<<st.top()<<'\n';// 2
}