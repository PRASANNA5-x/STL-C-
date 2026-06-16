#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);

    cout<<dq.front()<<endl;

    dq.pop_back();
    dq.pop_front();

    cout<<dq.size()<<endl;

    dq.push_back(10);
    dq.push_front(20);

    cout<<dq.front()<<" "<<dq.back()<<endl;

    if(dq.empty() == true){
        cout<<"empty";
    }
    else{
        cout<<"not";
    }
    cout<<endl;

    deque<int>::iterator it = dq.begin();

    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }

    cout<<endl;

    cout<<dq[0]<<endl;


    dq.clear();
    cout<<dq.size()<<endl;

    dq.insert(dq.begin(),10);
    dq.insert(dq.end(),20);
 

    cout<<dq[0]<<endl;

    cout<<dq[1]<<endl;
    cout<<dq.size()<<endl;
    dq.erase(dq.begin(),dq.end());
    cout<<dq.size()<<endl;




    return 0;

}