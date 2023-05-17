#include<iostream>
#include<array>
using namespace std;

int main(){
    int base[4] = {2,5,7,4}; // Normal form //UNUSED FORM IN THIS CODE

    array<int,4> a = {2,8,6,7}; //STL Form

    int size = a.size();   //checking Size of STL(a) array
    
    for(int i=0; i<size; i++){   //For print 
    cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd postion is-> "<<a.at(2)<<endl;  //2nd position element is 6 in a array(o based indexing)

    cout<<"front element of array is-> "<<a.front()<<endl; //front element means starting element of array)

    cout<<"Last element of array is-> "<<a.back()<<endl;

    cout<<"Is array empty or not-> "<<a.empty()<<endl; //return 0(false) if array is not empty and vice versa...
}