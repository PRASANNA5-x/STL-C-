#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;





class CustomComparator {
        public:
        bool operator()(int a, int b) {
            return a > b; 
    }
};



int main()
{

    vector<int> arr={5, 2, 9, 1, 5, 6};
    //ascending order
    sort(arr.begin(), arr.end());
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;

    //descending order using custom comparator
    sort(arr.begin(), arr.end(), CustomComparator());
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;



    return 0;
}