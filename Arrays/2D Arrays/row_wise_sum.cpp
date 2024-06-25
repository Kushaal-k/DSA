#include <iostream> 

using namespace std;

int main(){
    int rows,cols;

    cout << "Enter number of rows : " ;
    cin >> cols;

    cout << "Enter number of columns : " ;
    cin >> rows;

    int arr[rows][cols];
    cout << "Enter the elements of array :"  << endl;

    for(int i = 0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<cols;j++){
            sum += arr[i][j];
        }
        cout << "Sum of " << i+1 << " row is " << sum << endl;
    }
}   