#include<iostream>
#include<list>

using namespace std;
int main(){

    list <int> l;

    l.push_front(2);    //initali....
    l.push_back(5);

    cout<<"size is-> "<<l.size()<<endl;

    for(int i:l){       //printing elements...
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());     //erase first element
    for(int i:l){
        cout<<i<<" ";
    } cout<<endl;

    cout<<"size is-> "<<l.size()<<endl;

    list<int> n(4,100);     //list which have size 5 and values 100 for all.
    cout<<"printing 100's are like-> "<<endl;
    for(int i:n){       //starting from i to n....
        cout<<i<<" ";
    }cout<<endl;

}