#include <iostream> 

using namespace std;

int main(){
    int arr[10] = {4,32,5,2,5,7,3,20,23,1};
    int n =10;

    for(int i =0;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }   
        }
        if (swapped==false)
            break;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}