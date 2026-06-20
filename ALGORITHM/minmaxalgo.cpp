#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main(){


    int a = 10 ; 
    int b = 20 ;
    cout<< max(a,b)<<endl;

    cout<<min(a,b)<<endl;


    //min max in a range 

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);
    arr.push_back(15);
    arr.push_back(16);
    arr.push_back(46);


    auto it =  min_element(arr.begin(),arr.end());
    cout<< *it <<endl;

    auto it1 =  max_element(arr.begin(),arr.end());
    cout<< *it1 <<endl;


    return 0;

}