#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

    vector<int>v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    cout<<"Finding 8 ->"<<binary_search(v.begin(), v.end(),8)<<endl;        //Binary search to find element

    string hello = "hello";
    reverse(hello.begin(), hello.end());        //reverse string...
    cout<<"reverse string is-> "<<hello<<endl;

    cout<<"lower bound is->"<<lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;    
    cout<<"upper bound is->"<<upper_bound(v.begin(), v.end(),8)-v.begin()<<endl;
    

    int a = 9;
    int b = 4;

    cout<<"max is-> "<<max(a,b)<<endl;      // find maximum...

    swap(a,b);      //swap a and b
    cout<<"After swapped a is-> "<<a<<endl;     // print a after swap..

    rotate(v.begin(), v.begin()+1, v.end());  //rotate vector by one...
    cout<<"After rotate-> "<<endl;
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;


}