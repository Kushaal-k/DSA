#include <iostream> 

void merge(int arr1[],int m,int arr2[],int n,int arr3[]){
     
    int i =0,j =0,k=0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    
    while(i<m)
        arr3[k++] = arr1[i++];

    while(j<n)
        arr3[k++] = arr2[j++];
}

using namespace std;

int main(){
    int n,m;
    cout << "Enter number of elements in first array : ";
    cin >> m;
    cout << "Enter number of elements in second array : ";
    cin >> n;

    int arr1[m],arr2[n];

    cout << "Enter elements of first array : ";
    for(int i=0;i<m; i++)
        cin >> arr1[i];

    cout << "Enter elements of second array : ";
    for(int i =0;i<n;i++)
        cin >> arr2[i];
    
    int arr3[m+n];

    merge(arr1,m,arr2,n,arr3);

    cout << "Merged array : ";
    for(int i=0;i<(m+n); i++)
        cout << arr3[i] << " ";
    cout << endl;


}