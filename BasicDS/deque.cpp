#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int>dq;
	dq.push_back(1);
	cout<<dq.front()<<' '<<dq.back()<<'\n';// 1 1
	dq.push_back(2);
	cout<<dq.front()<<' '<<dq.back()<<'\n';// 1 2
	dq.push_back(3);
	cout<<dq.front()<<' '<<dq.back()<<'\n';// 1 3
	dq.pop_front();
	cout<<dq.front()<<' '<<dq.back()<<'\n';// 2 3
	dq.push_front(4);
	cout<<dq.front()<<' '<<dq.back()<<'\n';// 4 3
	dq.pop_back();
	cout<<dq.front()<<' '<<dq.back()<<'\n';// 4 2
}