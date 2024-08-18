#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(3);
    d.push_front(4);

    cout << d.back() << endl;
    cout << d.front() << endl;

    d.pop_front(); 

    cout << d.back() << endl;
    cout << d.front() << endl;

    d.pop_back();

    cout << d.back() << endl;
    cout << d.front() << endl;

    if (d.empty())
        cout << "Deque is empty." <<endl;

    else 
        cout << "Deque is not empty." << endl;
    
    return 0;
}