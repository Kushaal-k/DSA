// Question Link : https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

void InsertAtBottom(stack<int>& s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }

    int i = s.top();
    s.pop();

    InsertAtBottom(s,element);
    s.push(i);
}

int main(){
    stack<int> s;

    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);

    InsertAtBottom(s,6);
    return 0;
}