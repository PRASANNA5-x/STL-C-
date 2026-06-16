#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<int> q;

//insertion 
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
//10,20,30,40,50

//size
cout<<"size:"<<q.size()<<endl;

//pop
q.pop();
//pop always from front
cout<<"size:"<<q.size()<<endl;

if(q.empty() == true){
    return 0 ;
    cout<<"queue is empty";
    }else{
    cout<<"queue is not empty";
    }

    cout<<"first element:"<<q.front()<<endl;
    cout<<"last element:"<<q.back()<<endl;

    queue<int> first;
    queue<int> second;
    first.push(20);
    second.push(50);
    first.swap(second);
    cout<<"first element in first:"<<first.front();
    cout<<"second element in first:"<<second.front();

return 0 ;
}