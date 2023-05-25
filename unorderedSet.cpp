//it contains unique value
//internal implementation is diff . we use hash table so opertn take o(1) time
// int hash(x){
//     return x%10;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    // cin>>n;
    int arr[5] = {5,3,2,4,9};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    unordered_set<int>s;
    for(int i=0;i<5;i++){
    s.insert(arr[i]);
    }
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}