#include <iostream> 

using namespace std;

bool search(int arr[],int size,int target){
    if(size == 0)
        return false;

    if(arr[0] == target)
        return true;
    else 
        return search(arr+1,size-1,target);
}

int main(){
    int arr[5] = {5,6,2,1,3};
    int size = 5;

    int target ;
    cin >> target;

    bool ans = search(arr,size,target);

    if(ans)
        cout << "Element found." << endl;
    else 
        cout << "Element not found." << endl;
    
    return 0;
}