#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;

    q.push(15);
    q.push(10);
    q.push(12);
    cout << "Front element in queue : " << q.front() << endl;

    cout << "Size of queue : " << q.size() << endl;

    q.pop();

    cout << "Size of queue : " << q.size() << endl;


    if(q.empty())
        cout << "Queue is empty." << endl;
    else 
        cout << "Queue is not empty." << endl;

    
    return 0;
}