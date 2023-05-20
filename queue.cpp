#include<iostream>
#include<queue>

using namespace std;

//Function for printing queue starts...
void print_queue(queue<string> q)
{
    queue<string>t = q;
    while (!t.empty()) {
        cout << t.front()<<" "<<endl;
        t.pop();
    }
    cout << '\n';

}
//Function for printing queue end...


int main(){
    queue <string> q1; 

    q1.push("Hello");
    q1.push("Devs!");
    q1.push("upcoming");
    q1.push("SDE");

    cout<<"Queue is-> "<<endl;
    print_queue(q1);        //call function..

    cout<<"Size is-> "<<q1.size()<<endl;
    cout<<"fornt element is-> "<<q1.front()<<endl;
    
    q1.pop();       //This is FIFO so after popping the second element is print.. 

    cout<<"front element is-> "<<q1.front()<<endl;
    cout<<"Size is-> "<<q1.size()<<endl;


}