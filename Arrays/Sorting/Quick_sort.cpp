#include <iostream> 

using namespace std;

int partition(int *arr,int s,int e){

    int pivot = arr[s];

    int count = 0;

    for(int i=s+1;i<=e;i++){
        if(arr[i] < pivot)
            count++;
    }

    int pivotIndex = count + s;

    swap(arr[pivotIndex],arr[s]);

    int i =s, j = e;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<pivot)
            i++;

        while(arr[j]>pivot)
            j--;

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;
}

void QuickSort(int *arr,int s,int e){
    if(s>=e)
        return;

    int p = partition(arr,s,e);

    // Left part
    QuickSort(arr,s,p-1);

    // Right part
    QuickSort(arr,p+1,e);
}

int main(){
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n ;

    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> *(arr+i);

    QuickSort(arr,0,n-1);

    cout << "Sorted Array : " << endl;
    for(int i=0;i<n;i++)
        cout << *(arr+i) << " ";

    return 0;
}