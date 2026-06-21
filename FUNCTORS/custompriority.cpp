#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class student {
    public:
    string name;
    int marks;
    student(){

    }
    student(string n , int m){
        this->name = n;
        this->marks = m;
    }
};
class CustomComparator {
        public:
        bool operator()(const student& a, const student& b) {
            if(a.marks == b.marks){
                return a.name > b.name; // If marks are equal, sort by name in descending order
            }
            return a.marks < b.marks; // For max heap based on marks
        }
};//max marks -> high priority 

int main()
{
    priority_queue<student, vector<student>, CustomComparator> pq;
    pq.push(student("Alice", 85));
    pq.push(student("Bob", 90));
    pq.push(student("Charlie", 75));
    pq.push(student("David", 95));
    pq.push(student("Eve", 75));

    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();

    // //max heap
    // priority_queue<int> pq;
    // priority_queue<int, vector<int>, less<int>> pq1; // This is the default max heap
    
    // //min heap
    // priority_queue<int, vector<int>, greater<int>> pq2;
    
    return 0;

}
