#include <vector>
#include <iostream>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        
    int s = 0;
    int e = arr.size() - 1 ;

    int mid = s + (e-s)/2;

    while(s<e){
        if (arr[mid]< arr[mid+1]){
            s = mid +1;
        }
        else 
            e = mid;
            
        mid = s + (e-s)/2;
    }
        return s;
}

int main(){
    vector<int> arr;

    arr = {3,4,5,2,1};

    cout << "Index of peak element is " << peakIndexInMountainArray(arr) << endl;

}