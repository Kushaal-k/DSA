#include <iostream> 

using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements in array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }
    cout << endl;

    int min = arr[0];
    int max = arr[0];

    for(int i=0;i<n;i++){
        if(min > arr[i])
            min = arr[i];

        if(max < arr[i])
            max = arr[i];
    }

    cout << "Maximum element : " << max << endl;
    cout << "Minimum element : " << min << endl;
    
}