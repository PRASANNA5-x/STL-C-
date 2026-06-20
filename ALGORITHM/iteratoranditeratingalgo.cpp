#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printDouble(int a){
    cout<< 2*a <<"  ";
}

bool checkeven(int a){
    return a%2 == 0;
}
int main(){

    vector<int>arr(7);

    arr[0]= 11;
    arr[1]= 20;
    arr[2]= 30;
    arr[3]= 40;
    arr[4]= 50;
    arr[5]= 20;
    arr[6]= 20;

    //for_each
    for_each(arr.begin(), arr.end(),printDouble);
    
    //find()
    int target = 11;
    auto it = find(arr.begin(),arr.end(),target);
    cout<<*it<<endl;

    //find_if
    auto it1 = find_if(arr.begin(), arr.end(),checkeven);
    cout << *it1 <<endl;

    //count
    int target1 = 20;
    int ans = count(arr.begin() ,arr.end() , target1);
    cout<<ans<<endl;

    //count_if
    int ans1 = count_if(arr.begin(),arr.end(),checkeven);
    cout<<ans1<<endl;

    //sort
    sort(arr.begin(),arr.end());

    for(int a : arr){
        cout<< a << " ";
    }
    cout<<endl;


    //reverse 
    reverse(arr.begin(),arr.end());

    for(int a : arr){
        cout<< a << " ";
    }

    cout<<endl;

    //rotate
    //rotoates element in a range
    //left rotate
    rotate(arr.begin(),arr.begin()+3,arr.end());
    cout<<"rotated:";
    for(int a : arr){
        cout<< a << " ";
    }
    cout<<endl;
     //rotoates element in a range 
     //right rotate
    rotate(arr.begin(),arr.end()-3,arr.end());
    cout<<"rotated:";
    for(int a : arr){
        cout<< a << " ";
    }
     cout<<endl;
    //unique
    //removes duplicates from a sorted range 
    auto it2 = unique(arr.begin(),arr.end());
    //it2 iterator se pahile sar unique hai
    //it2 ke baad sare duplicate
    arr.erase(it2,arr.end());
    for(int a : arr){
        cout<< a << " ";
    }
    cout<<endl;

    //partition
    auto it3 = partition(arr.begin(),arr.end(),checkeven);
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;


    return 0;

}