#include<iostream>
#include<vector>
using namespace std;

int main()
{

    //creation
    vector<int> marks;

    //vector<int> miles(10);

    //vector<int> distances(15,0);

    //v.begin() return iterator ex vmarks.begin() goes to 0 index of marks vectors 
    //it meana pointer at 0index , it++ means at 1 index continuous till end 
    //*it used to access value at vector 
    //v.end() end of vector 

    //cout<<*(marks.begin())<<endl;

    marks.push_back(10);
    marks.push_back(100);
    marks.push_back(1000);
    marks.push_back(10000);

    marks.pop_back();//10000 would get delete 
    cout<<"SIZE:"<<marks.size()<<endl;//size changed from 4 to 3 

    //capacity of vector size
    cout << marks.capacity()<<endl;

    //reserve
    marks.reserve(10);
    cout << marks.capacity()<<endl;

    cout<< marks.front() << endl; //10
    cout << marks.back() << endl; //1000

    //to check if empty
    if(marks.empty() == true){
        cout<<"Vector is empty;"<<endl;
    }
    else{
        cout<<"vector is not empty"<<endl;
    }

    //access value and modification 
    cout << marks[0] <<endl;
    marks[0]= 100;
    cout<< marks[0]<<endl;

    //.at[] similar to marks[]
    cout << marks.at(0)<<endl;

    //maximum size of vector , depends on system configuration
    cout<< marks.max_size()<<endl;

    //all elements get removed - clear()
    marks.clear();
    cout<<marks.size()<<endl;

    //.insert()
    marks.insert(marks.begin(),101);
    cout<<marks.size()<<endl;
    cout<<marks.front();

    //erase
    marks.push_back(11);
    marks.push_back(12);
    marks.push_back(13);
    marks.push_back(14);

    cout<<marks.size()<<endl;
    marks.erase(marks.begin(),marks.end());
    cout<<marks.size()<<endl;

    //swap
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

    second.push_back(14);
    second.push_back(15);
    second.push_back(16);
    second.push_back(17);

    first.swap(second);
    cout<<first[0]<<"  "<<first[1]<<"  "<<first[2]<<"  "<<first[3]<<"  ";
    
    //for each loop 
    for(int i : first){
        cout<<i<<" "<<endl;
    }
     for(int i : second){
        cout<<i<<" "<<endl;
    }

    //traversing using iterator

    //create an iterator 
    vector<int>::iterator it = first.begin();
    while(it != first.end()){
        cout<< *it <<" ";
        it++;
    }

    vector<vector<int>> arr(5,vector<int>(4,0));
    //2d array created , 5 row , 4 col , initial value as "0"
    int totalrows = arr.size();
    int totalcols = arr[0].size();
    cout<<"total rows "<<totalrows<<" "<<"total cols "<<totalcols<<endl;



    vector<vector<int>> brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);
    
    int totalrowcount = brr.size();
    cout<<"total rows "<<totalrowcount<<endl;
    

    return 0 ;
}
