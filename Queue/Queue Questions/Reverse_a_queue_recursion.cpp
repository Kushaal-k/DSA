#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

void rev(queue<int>& q){

    if(q.empty()){
        return;
    }

    int ele = q.front();
    q.pop();

    rev(q);

    q.push(ele);

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

    rev(q);

    cout << "Reverse Queue : ";
    print_queue(q);

    return 0;
}