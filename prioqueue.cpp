#include<iostream>
#include<queue>

using namespace std;
int main(){
    priority_queue <int> maxi;      // initiali... for maximum

    maxi.push(2);
    maxi.push(4);
    maxi.push(6);
    maxi.push(8);

    cout<<"Size is->"<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    } cout<<endl;

    priority_queue <int, vector<int>, greater<int>> mini;  //inital.. for minimum...
    
    mini.push(2);
    mini.push(4);
    mini.push(6);
    mini.push(8);

    cout<<"Size is->"<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    } cout<<endl;

}


