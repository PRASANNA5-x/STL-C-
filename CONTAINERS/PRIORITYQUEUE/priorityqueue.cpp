#include<iostream>
#include<queue>
using namespace std;

int main(){
    //create
    priority_queue<int> pq;
    //max-heap -> maximum value -> highest priority

    pq.push(10);
    //10
    pq.push(25);
    //25,10
    pq.push(21);
    //25,21,10
    pq.push(11);
    // heap -> 25 , 21 , 11,10
    cout<<"top element:"<<pq.top()<<endl; 

     pq.pop();
    //25 pop 
    cout<<pq.top()<<endl;

    if(pq.empty() == true){
        cout<<"EMPTY";
    }
    else{
        cout<<"NOT EMPTY";
    }



    // min heap 


    priority_queue<int , vector<int>,greater<int>>mpq;
    mpq.push(10);
    mpq.push(20);
    mpq.push(30);
    mpq.push(40);
    mpq.push(50);
    mpq.push(60);
    //10,20,30,40,50,60

    cout<<"min top : "<<mpq.top()<<endl;
    mpq.pop();
     cout<<"min top : "<<mpq.top()<<endl;
    return 0;

}