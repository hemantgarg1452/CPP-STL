#include<iostream>
#include<stack>

using namespace std;
int main(){

    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(1);

    cout<<"Size is -> "<<s.size()<<endl;

    cout<<"Top element of stack before any popping is -> "<<s.top()<<endl;
    s.pop();
    cout<<"Top element o fthe stack after popping is ->"<<s.top()<<endl;

 
    cout<<"Empty or not->"<<s.empty()<<endl;
}

