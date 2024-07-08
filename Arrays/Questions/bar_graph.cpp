#include <iostream> 

using namespace std;

int max(int* arr,int size){
    int max = INT_MIN;
    int max_index = 0;

    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
            max_index = i;
        }
    }
    return max;
}

int main(){
    int size = 0;
    cout << "Enter number of elements in array : ";
    cin >> size ;

    int *arr = new int[size];
    
    int maximum = max(arr,size);

    for(int i=maximum;i>0;i-- ){
        for(int j=0;j<size;j++){
            if(arr[j]>=i)
                cout << "* " ;
            else 
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}