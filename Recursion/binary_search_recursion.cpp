#include <iostream> 

using namespace std;

bool binary_search(int *arr,int s,int e,int key){

    if(s>e)
        return false;
    
    int mid = s + (e-s)/2;

    if(arr[mid] == key)
        return true;

    if(arr[mid]<key){
        return binary_search(arr,mid+1,e,key);
    }
    else 
        return binary_search(arr,s,mid-1,key);
}

int main(){

    int arr[5] = {2,5,7,8,9};
    int size = 5;

    cout << "Enter target to search : " ;

    int n;
    cin >> n;

    if(binary_search(arr,0,size-1,n))
        cout << "Element found in array." << endl;
    else 
        cout << "Element not found in array." << endl;

    return 0;
}