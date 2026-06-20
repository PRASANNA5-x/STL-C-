#include <iostream>
#include <list>
using namespace std;

int main(){

    //creation
    list<int> mylist;

    //insertion
    mylist.push_back(10);
    mylist.push_back(20); 
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_back(50);

    //10,20,30,40,50
    cout << mylist.size();
    for(int x : mylist)
{
    cout << x << " "<<endl;
}

    mylist.push_front(0);
    //0,10,20,30,40,50
    cout << mylist.size();
    for(int x : mylist)
{
    cout << x << " "<<endl;
}

    //deletion
    mylist.pop_back();
    mylist.pop_front();
    cout << mylist.size();
    for(int x : mylist)
{
    cout << x << " "<<endl;
}

    mylist.clear();
    cout<<mylist.size()<<endl;


    if (mylist.empty() == true)
    {
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"list is not empty"<<endl;
    }

    mylist.push_back(10);
    mylist.push_back(20); 
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_back(50);
     
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;

     mylist.push_back(10);

    //10,20,30,40,10
    cout<<"before removing:"<<endl;
    list<int>::iterator it = mylist.begin();
    while(it != mylist.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    mylist.remove(10);//all 10 elements would get removed from list

    cout<<"after removing:"<<endl;
    list<int>::iterator it1 = mylist.begin();

    while(it1 != mylist.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;


    //swap
    list<int> first;

    list<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    second.push_back(40);
    second.push_back(50);

    first.swap(second);

    cout<<"first list after swapping:"<<endl;
    for(int x : first){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"second list after swapping:"<<endl;
    for(int x : second){
        cout<<x<<" ";
    }
    cout<<endl;

    first.insert(first.begin(),10);
    first.insert(first.end(),50);
    cout<<"first list after inserting 10:"<<endl;

    list<int>::iterator it2 = first.begin();
    while(it2 != first.end()){
        cout<<*it2<<" ";
        it2++;
    }
    cout<<endl;

    cout<<first.size()<<endl;
    first.erase(first.begin(),first.end());
    cout<<first.size()<<endl;
    return 0 ; 
}