// Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list 
// represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each
// unit of a board takes 1 unit of time to paint.

// You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a 
// constraint that any painter will only paint the continuous sections of boards.

// Example :
// Input: arr = [2, 1, 5, 6, 2, 3], k = 2

// Output: 11

// Explanation:
// First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time.
// Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be
// painted in less than 11 units of time.



#include <bits/stdc++.h> 
#include <iostream> 

using namespace std;

int isPossible(vector<int> arr, int n, int m, int mid){

    int painter = 1 ;
    int board = 0 ;

    for(int i=0;i<n;i++){
        if(board + arr[i] <=mid)
            board += arr[i];
        else{
            painter++;
            if((painter > m) || (arr[i] > mid)){
                return false;
            }
            board = arr[i];
        }
        if(painter > m)
            return false;
    }
    return true;
}

int painterPartition(vector<int>& arr,int n,int m){
    int s = 0;
    int sum = 0;

    for(int i = 0;i<n ; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    int n=6;
    int m=2;
    int input ;
    int k=1;

    // cout << "Enter the number of students : ";
    // cin >> m;
    
    // cout << "Enter the number of books : " ;
    // cin >> n;

    // cout << "Enter the number of pages : ";
    // while((cin >> input) && k<n){
    //     arr.push_back(input);
    //     k++;
    // }
        

    
    cout << painterPartition(arr,n,m) << endl;

}