#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    
    //create
    map<string,string> table;

    //insertion
    //1.
    table["in"] = "india";
    //2.
    table.insert(make_pair("en","england"));
    //3.
    pair<string,string> p;
    p.first = "br";
    p.second = "brazil";
    table.insert(p);

    // //size
    // cout<<"SIZE:"<<table.size()<<endl;

    // //clear
    // table.clear();

    // //size
    // cout<<"SIZE:"<<table.size()<<endl;

    // if(table.empty() == true){
    //     cout<<"TABLE EMPTY";
    // }
    // else{
    //     cout<<"TABLE NOT EMPTY";
    // }

    // cout << endl;

    // //1.
    // table["in"] = "india";
    // //2.
    // table.insert(make_pair("en","england"));
    // //3.
    // pair<string,string> p1;
    // p1.first = "br";
    // p1.second = "brazil";
    // table.insert(p1);

    // //size
    // cout<<"SIZE:"<<table.size()<<endl;

    // //updation
    // cout<<table.at("in")<<endl;//india
    // table.at("in") = "india2";
    // cout<<table.at("in")<<endl;//india2

    // table["in"] = "india3";
    // cout<<table.at("in")<<endl;


   map<string, string>::iterator it = table.begin();

    while(it!=table.end()){
        pair<string,string> p = *it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }


    // cout<<table.size()<<endl;

    // //table.erase(table.begin() , table.end());

    // cout<<table.size()<<endl;

    // //find

    // if(table.find("in") != table.end()){
    //     cout<<"key found"<<endl;
    // }
    // else{
    //     cout<<"key not found";
    // }

    // //count

    // if(table.count("in") == 0){
    //     cout<<"key not found"<<endl;
    // }
    //   if(table.count("in") == 1){
    //     cout<<"key found"<<endl;
    // }



    return 0;
}