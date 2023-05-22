#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int>d;

    d.push_front(5);
    d.push_back(9);

    cout<<"Size is ->"<<d.size()<<endl;

    cout<<"First index element is->"<<d.at(1)<<endl; //pints 9 bcz of 0 based indexing..

    cout<<"front element is ->"<<d.front()<<endl;
    cout<<"end element is ->"<<d.back()<<endl;

    cout<<"Empty or not ->"<<d.empty()<<endl;

    cout<<"Before erase size is ->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); // This function erase begin(1st ele..)in queue..
    cout<<"After erase size is ->"<<d.size()<<endl;

    for(auto i:d){
        cout<<i<<" "<<endl;   // prints 9 bcz above func. erase 5
        
    }

}