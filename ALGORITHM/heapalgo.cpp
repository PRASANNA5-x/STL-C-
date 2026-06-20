#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main(){ 


    vector<int> arr;
    arr.push_back(50);
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);
    arr.push_back(15);
    arr.push_back(16);
    arr.push_back(46);

    //vector to heap

    make_heap(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<"  ";
    }
    cout<<endl;

    //push_heap

    arr.push_back(99);
    push_heap(arr.begin(),arr.end());
     for(int a : arr){
        cout<<a<<"  ";
    }
    cout<<endl;

    //deletion
    //pop_heap
     for(int a : arr){
        cout<<a<<"  ";
    }
    cout<<endl;
    pop_heap(arr.begin(),arr.end());
    arr.pop_back();
     for(int a : arr){
        cout<<a<<"  ";
    }
    cout<<endl;


    //sort
    sort_heap(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<"  ";
    }
    cout<<endl;



    return 0;

}