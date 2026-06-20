#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    cout<<"ordered set"<<endl;
    //creation
    set<int> s;

    //insertion
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    s.insert(25);
    //traverse

    set<int>::iterator it = s.begin();

    while (it!= s.end()){
        cout<<*it<<endl;
        it++;
    }

    cout<<s.size()<<endl;

    s.clear();
    cout<<s.size()<<endl;

    if(s.empty() == true){
        cout<<"set empty";
    }
    else{
        cout<<"set not empty"<<endl;
    }

    //insertion
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    s.insert(25);

    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;

      //insertion
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    s.insert(25);

    cout<<s.size()<<endl;

    if(s.find(15) != s.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

     if(s.count(15) == 1){
        cout<<"found"<<endl;
    }
    if(s.count(15) == 0){
        cout<<"notfound"<<endl;
    }


    cout<<"unordered set "<<endl;
     //creation
    unordered_set<int> st;

    //insertion
    st.insert(10);
    st.insert(15);
    st.insert(20);
    st.insert(25);
    st.insert(25);
    //traverse

    unordered_set<int>::iterator it1 = st.begin();

    while (it1!= st.end()){
        cout<<*it1<<endl;
        it1++;
    }


    return 0;
}