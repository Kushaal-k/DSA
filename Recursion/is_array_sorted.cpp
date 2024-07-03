#include <iostream> 

using namespace std;

bool isSorted(int *arr,int size){
    if(size == 0|| size == 1)
        return true;

    if(arr[0]>arr[1])
        return false;
    else{ 
        bool remainingpart = isSorted(arr+1,size-1);
        return remainingpart;
    }
}

int main(){
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n ;

    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> *(arr+i);

    if(isSorted(arr,n))
        cout << "The array is sorted." << endl;
    else 
        cout << "The array is not sorted." << endl;
        
    delete []arr ;


}