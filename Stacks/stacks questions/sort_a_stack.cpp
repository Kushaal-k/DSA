#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

void sortedInsert(stack<int> &s,int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    sortedInsert(s,num);

    s.push(n);
}

void sortstack(stack<int> &s){
    if(s.empty())
        return;

    int num = s.top();
    s.pop();

    sortstack(s);

    sortedInsert(s,num);
}

int main(){
    stack<int> s;

    s.push(10);
    s.push(-7);
    s.push(-5);
    s.push(5);


    return 0;
}