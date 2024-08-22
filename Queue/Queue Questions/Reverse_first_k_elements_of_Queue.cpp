#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

queue<int> modifyQueue(queue<int> q,int k){
    stack<int>  s;

    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    int t = q.size() -k;

    while(t--){
        q.push(q.front());
        q.pop();
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
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);

    a = modifyQueue(a,3);
    print_queue(a);
    return 0;
}