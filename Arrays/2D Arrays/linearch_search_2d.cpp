#include <iostream> 

using namespace std;

bool linearsearch(int  arr[][4],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target)
                return true;
        }
    }
    return false;
}

int main(){
    int arr[3][4];

    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }


    int target;
    cout << "Enter the number u want to search : ";
    cin >> target;

    if(linearsearch(arr,target))
        cout << "Element is present in array." << endl;
    else 
        cout << "Element is not present in array." << endl;
}