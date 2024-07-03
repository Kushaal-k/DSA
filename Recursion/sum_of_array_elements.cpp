#include <iostream> 

using namespace std;

int sumofElements(int *arr,int size){
    if(size==0)
        return 0;

    return *arr + sumofElements(arr+1,size-1);
}

int main(){
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n ;

    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> *(arr+i);

    cout << "The sum of elements of array : " << sumofElements(arr,n) << endl;

    delete []arr;
    return 0;
}