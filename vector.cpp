#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v;   // Vector Initial....

//Always image a array when using vector, the difference is only that vector has dynamic size..

    v.push_back(1);     //Insert item in vectors.. 
    v.push_back(2);     
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    int size = v.size();       // size of vector

    // for(int i =0; i<size; i++){
    //     cout<<v[i]<<endl;
    // }

    cout<<"Size is->"<<size<<endl;  // it shows the inserted elements no. of vector..
    cout<<"capacity is->"<<v.capacity()<<endl; // it shows the capacity of vector to storing numbers.

    cout<<"Element at 4th position is ->"<<v.at(4)<<endl; 

    cout<<"Element at front is->"<<v.front()<<endl;
    cout<<"Element at Last is->"<<v.back()<<endl;

    cout<<"Before Pop"<<endl;  //vector before popping
    for(int i:v){
        cout<<i<<" ";
        cout<<endl;
    }
    v.pop_back();   // This function pop a element from the end...

    cout<<"After Pop"<<endl;//vector after popping
    for(int i:v){
        cout<<i<<" ";
        cout<<endl;
    }

    cout<<"Before clear size is -> "<<v.size()<<endl;

    v.clear(); // This func. clear the whole vector..

    cout<<"After clear size is -> "<<v.size()<<endl;
    
    
}