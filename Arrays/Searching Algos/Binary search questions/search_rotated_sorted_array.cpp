#include <iostream> 

using namespace std;

int Binary_search(int arr[],int n,int s ,int key){

    int e = n - 1;

    int mid  = s + (e - s)/2;

    while (s<=e){
        if(arr[mid] == key)
            return mid;

        if(key > arr[mid])
            s = mid + 1;
        else 
            e = mid - 1;

        mid = s + (e-s)/2;
    }

    return -1;
}

int getPivot(int arr[], int n){

    int s = 0 ;
    int e = n - 1; 

    int mid = s + (e-s)/2 ; 

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else 
            e = mid;
        
        mid = s + (e-s)/2 ; 
    }
    return s ;
}

int main(){
    // int arr[6] = {5,6,1,2,3,4};
    int arr[2] = {1,3};
    int n = 2;
    int pivot = getPivot(arr,2);

    int target;
    cout << "Enter the target : ";;
    cin >> target;

    for(int i=0;i<n;i++){
        if(arr[i]==target)
            return i;
    }

    if(arr[pivot] <= target && target <= arr[n-1]){
        if(Binary_search(arr,n,pivot,target)!=-1)
            cout << "The element is present in array on index " << Binary_search(arr,n,pivot,target) << endl;
    }
    
    else if(Binary_search(arr,pivot-1,0,target)!=-1)
            cout << "The element is present in array on index " << Binary_search(arr,pivot-1,0,target) << endl;
    
    else
        cout << "The element is not present in array." << endl ; 
}