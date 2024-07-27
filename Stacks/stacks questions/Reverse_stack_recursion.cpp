#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

void InsertAtBottom(stack<int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }

    int i = s.top();
    s.pop();

    InsertAtBottom(s,element);
    s.push(i);
}

void reverseStack(stack<int>& s){
    if(s.empty())
        return;

    int num = s.top();
    s.pop();

    reverseStack(s);

    InsertAtBottom(s,num);
}

int main(){
    stack<int> s;

    s.push(9);
    s.push(11);
    s.push(12);

    reverseStack(s);
    return 0;
}