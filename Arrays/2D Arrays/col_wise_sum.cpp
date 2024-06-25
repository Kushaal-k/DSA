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

    cout << "Entered array is : " << endl;

    for(int i = 0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0;i<cols;i++){
        int sum = 0;
        for(int j=0;j<rows;j++){
            sum += arr[j][i];
        }
        cout << "Sum of " << i+1 << " columnn is " << sum << endl;
    }
}   