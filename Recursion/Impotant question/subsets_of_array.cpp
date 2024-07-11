#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        solve(nums,output,index+1,ans);

        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        return ans;
    }
};

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    vector<int> nums(n);

    for(int i:nums)
        cin >> i;

    vector<vector<int>> ans;
    Solution subset;

    ans = subset.subsets(nums);

    return 0;
}