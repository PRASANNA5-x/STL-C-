#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);
    arr.push_back(15);
    arr.push_back(16);
     arr.push_back(46);

    //binary_search  o(n)
    int target = 15;
    bool it =  binary_search(arr.begin(),arr.end(),target);
    cout<<it<<endl;

    //lower bound
    auto it1 = lower_bound(arr.begin(),arr.end(),35);
    cout<<*it1<<endl;

    //uper bound
    auto it3 = upper_bound(arr.begin(),arr.end(),16);
    cout<<*it3<<endl;

    //equal_range
    sort(arr.begin(), arr.end());

    auto it4 = equal_range(arr.begin(), arr.end(), 16);

    cout << "First occurrence index: "
     << it4.first - arr.begin() << endl;

    cout << "Last occurrence index: "
     << it4.second - arr.begin() << endl;















    return 0;
}