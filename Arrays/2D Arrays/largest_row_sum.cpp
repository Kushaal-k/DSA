#include <iostream> 

using namespace std;

int max_RowIndex(int arr[][4]){
    int rows = 3;
    int cols = 4;
    int sum = 0;
    int rowIndex = -1;
    int max = INT_MIN;
    for(int i = 0;i<rows;i++){
        sum = 0;
        for(int j=0;j<cols;j++){
            sum += arr[i][j];
        }
        if(max<sum){
            max = sum ;
            rowIndex = i;
        }
        
    }
    cout << "Sum of the max row is " << max << endl;
    return rowIndex+1;
}

int main(){

    int arr[3][4];
    cout << "Enter the elements of array :"  << endl;

    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    cout << "Entered array : " << endl;
    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ans = max_RowIndex(arr);
    cout << "Max sum is of " << ans << " row." << endl;
   

    return 0;
}   