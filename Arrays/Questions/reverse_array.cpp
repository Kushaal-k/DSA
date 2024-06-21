#include <iostream> 

using namespace std;

void reverse(int* arr,int n){
    int j= n-1;
    for(int i=0;i<n/2;i++){
        swap(*(arr+i),*(arr+j));
        j--;
    }
}

int main(){
    int arr[10] = {3,9,2,4,2,5,6,74,3,6};

    for(int i= 0;i<10;i++)
        cout<< arr[i] << " ";
    cout << endl;

    reverse(arr,10);

    for(int i= 0;i<10;i++)
        cout<< arr[i] << " ";
    cout<< endl;

}