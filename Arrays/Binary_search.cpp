#include <iostream> 

using namespace std;

int binary_search(int arr[],int size,int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key)
            return mid;

        if(key>arr[mid]){
            start = mid +1;
        }
        else {
            end = mid -1;
        }

        mid = start + (end-start)/2;
    }
    return -1;

}

int main(){
    int even[6] = {3,5,2,1,6,3};
    int index_even = binary_search(even,6,6);

    cout << "The index of 6 in array is " << index_even << endl;
}