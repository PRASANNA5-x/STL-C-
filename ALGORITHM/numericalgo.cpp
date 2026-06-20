#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main(){

    vector<int>arr(5);
    arr[0]= 10;
    arr[1]= 20;
    arr[2]= 30;
    arr[3]= 40;
    arr[4]= 50;
    arr[5]= 60;

    //accumulate
   int total =  accumulate(arr.begin(),arr.end(),0);
   cout<<"TOTAL SUM : "<<total <<endl;

   //inner_product
   //computes the inner product of two ranges 
    vector<int>first;  
    first.push_back(1);   
    first.push_back(2); 
    first.push_back(3);                            ;

    vector<int>second;  
    second.push_back(3);   
    second.push_back(4); 
    second.push_back(5);  

    int ans1 = inner_product(first.begin(),first.end(),second.begin(),0);
    cout<<"INNER PRODUCT :"<<ans1<<endl;

    //partial_sum
     vector<int>arr2;  
    arr2.push_back(1);   
    arr2.push_back(2); 
    arr2.push_back(3);  
    
    vector<int>result(arr2.size());
    partial_sum(arr2.begin(),arr2.end(),result.begin());

    for(int a : result){
        cout<<"PARTIAL_SUM:"<<a<<"  ";
    }
    cout<<endl;

    vector<int> arr3(5);

    iota(arr3.begin(),arr3.end(),250);
    for(int a : arr3){
        cout<<a<<"  ";
    }
    cout<<endl;



    return 0 ;

}