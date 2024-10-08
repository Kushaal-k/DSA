// Question Link : https://www.naukri.com/code360/problems/next-smaller-element_1112581


#include <iostream> 
#include <bits/stdc++.h>

using namespace std;


vector<int> nextSmallerElement(vector<int> &arr,int n){

    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i =n-1 ;i>=0; i--){
        int curr = arr[i];

        while(s.top()>=curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }

    return ans;
}

int main(){
    vector<int> arr = {2,1,4,3};

    vector<int> ans = nextSmallerElement(arr,arr.size());

    for(int i : ans)
        cout << i << " ";

    cout << endl;


    return 0;
}