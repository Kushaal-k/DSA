#include <iostream> 

using namespace std;

void merge(int *arr,int s,int e,int& count){

    int mid = s +(e-s)/2;

    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copying array
    int mainArrayIndex = s ;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;
    
    // merging and sorting array
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
            
        else{
            arr[mainArrayIndex++] = second[index2++];
            count = count+len1-index1;
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
        
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
        
    delete []first;
    delete []second;
}

void mergeSort(int *arr,int s,int e,int& count){
    if(s>=e)
        return;

    int mid = s + (e-s)/2;

    mergeSort(arr,s,mid,count);

    mergeSort(arr,mid+1,e,count);

    merge(arr,s,e,count);
}

int main(){
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n ;

    int count = 0;

    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> *(arr+i);

    mergeSort(arr,0,n-1,count);

    cout << "Sorted Array : " << endl;
    for(int i=0;i<n;i++)
        cout << *(arr+i) << " ";
    cout << endl;

    cout  << "Inversion Count : " << count ;

    delete []arr;
    return 0;
}