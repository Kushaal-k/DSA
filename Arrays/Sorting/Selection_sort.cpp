#include <iostream> 

using namespace std;

int main(){
    int arr[10] = {4,32,5,2,5,7,3,20,23,1};
    int n =10;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}