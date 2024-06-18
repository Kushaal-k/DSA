#include <iostream>

using namespace std;

int main (){
    int n,target;
    bool found = false;
    cout << "Enter number of elements in array : ";
    cin >> n;

    cout << "Enter your target value : " ;
    cin >> target;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            found = true;
        }
    }
    if (found)
        cout << "true";
    else 
        cout << "false";
}