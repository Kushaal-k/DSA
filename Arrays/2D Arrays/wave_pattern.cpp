#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    int size = arr.size();
    int count = 0;
    int starting_col = 0;

    for(int cols = 0;cols<mCols ;cols++){
        
        if(cols&1){
            for(int row = nRows-1;row>=0;row--){
                ans.push_back(arr[row][cols]);
            }
        }

        else{
            for(int row = 0;row<nRows;row++){
                ans.push_back(arr[row][cols]);

            }
        }
    }
    return ans;
}