#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main() {

    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    // Creating and traversing using iterator
    cout << "Traversal: ";
    vector<int>::iterator it = arr.begin();

    while(it != arr.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // =====================
    // Forward Iterator
    // =====================
    cout << "Forward: ";

    it = arr.begin();

    while(it != arr.end()) {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // =====================
    // Backward Iterator
    // =====================
    cout << "Backward: ";

    it = arr.end() - 1;

    while(it != arr.begin()) {
        cout << *it << " ";
        it--;
    }

    cout << *it << endl;

    // =====================
    // Random Access Iterator
    // =====================
    it = arr.begin();

    cout << "Current: " << *it << endl;

    it = it + 2;

    cout << "After +2: " << *it << endl;

    it = it - 1;

    cout << "After -1: " << *it << endl;

    // =====================
    // Bidirectional Iterator
    // =====================
    list<int> myList1;

    myList1.push_back(100);
    myList1.push_back(200);
    myList1.push_back(300);

    cout << "List Forward: ";

    list<int>::iterator lit = myList1.begin();

    while(lit != myList1.end()) {
        cout << *lit << " ";
        lit++;
    }

    cout << endl;

    // lit is currently at end()
    lit--;

    cout << "List Backward: ";

    while(lit != myList1.begin()) {
        cout << *lit << " ";
        lit--;
    }

    cout << *lit << endl;

    return 0;
}