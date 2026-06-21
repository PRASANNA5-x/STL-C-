#include<iostream>
#include<vector>
#include<algorithm>
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

class studentcmp {
public:
    bool operator()( const student& a,  const student& b) {
        if(a.marks == b.marks){
            return a.name < b.name; // If marks are equal, sort by name in ascending order
        }
        return a.marks > b.marks; // Sort in descending order of marks
    }
};

int main()
{
    vector<student> students;
    students.push_back(student("Alice", 85));
    students.push_back(student("David", 90));
    students.push_back(student("Bob", 90));
    students.push_back(student("Charlie", 80));

    sort(students.begin(), students.end(), studentcmp());
    
    for(const student& s : students){
        cout << s.name << ": " << s.marks << endl;
    }
    

    return 0;
}