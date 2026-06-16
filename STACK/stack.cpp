#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<"SIZE:"<<s.size()<<endl;

    s.pop();//50 delelted

    cout<<"SIZE:"<<s.size()<<endl;

    cout<<s.top()<<endl;//top element in stack

    if(s.empty() == true)
    {
        cout<<"STACK IS EMPTY";
    }
    else{
        cout<<"STACK IS NOT EMPTY";
    }

    stack<int> first;
    stack<int> second;
    first.push(10);
    second.push(20);
    first.swap(second);
    cout<<first.top()<<endl;

    return 0;
}

//iterator not valid in stack 
