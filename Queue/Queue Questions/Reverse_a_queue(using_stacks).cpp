#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

queue<int> rev(queue<int> q){
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    return q;
}

void print_queue(queue<int> q)
{
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front()<<" ";
        temp.pop();
    }
    cout << '\n';
}

int main(){
    queue<int> q;

    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);

    print_queue(q);

    q= rev(q);

    cout << "Reverse Queue : ";
    print_queue(q);

    return 0;
}