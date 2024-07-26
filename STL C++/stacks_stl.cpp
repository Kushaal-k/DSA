#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main(){ 

    //creation of stack
    stack<int> s;

    //insert element 
    s.push(6);
    s.push(5);

    //pop - Last In First Out
    s.pop();

    //top element in a stack
    cout << "Top element : " << s.top() << endl;
    
    //Check if stack is empty   
    if(s.empty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    // Size of stack
    cout << "Size of stack : " << s.size() << endl;
    return 0;
}