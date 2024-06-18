#include <iostream> 

using namespace std;

int firstOccur(int arr[],int size,int key){

    int ans;

    int s = 0;
    int e = size - 1 ;

    int mid = s + (e - s)/2;

    while(s<=e){
        if(arr[mid] == key){
            e = mid - 1; 
            ans = mid;
        }
        else if(key > arr[mid])
            s = mid + 1;

        else if(key < arr[mid])
            e = mid -1;

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccur(int arr[],int size,int key){

    int ans;

    int s = 0;
    int e = size - 1 ;

    int mid = s + (e - s)/2;

    while(s<=e){
        if(arr[mid] == key){
            s = mid + 1; 
            ans = mid;
        }
        else if(key > arr[mid])
            s = mid + 1;

        else if(key < arr[mid])
            e = mid -1;

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int even[6] = {3,4,5,5,5,7};
    int odd[7] = {2,3,4,4,4,4,10};

    cout << "The first and last occurrence of 5 in first array is " << firstOccur(even,6,5) << " and " << lastOccur(even,6,5) << endl;
    cout << "The first and last occurrence of 4 in second array is " << firstOccur(odd,7,4) << " and " << lastOccur(odd,7,4) << endl;
    
}