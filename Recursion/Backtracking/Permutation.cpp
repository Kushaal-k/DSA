#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans)
    {
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, index + 1, ans);

            // Backtracking
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;

        int index = 0;
        solve(nums, index, ans);
        return ans;
    }

//     int main()
//     {
//         int n;
//         cout << "Enter number of elements in array : ";
//         cin >> n;

//         vector<int> arr;
//         for (int i : arr)
//             cin >> arr[i];

//         vector<vector<int>> ans = permute(arr);

//         for (int i = 0; i < ans.size(); i++)
//         {
//             for (int j = 0; j < ans[i].size(); j++)
//             {
//                 cout << ans[i][j];
//             }
//         }
//         return 0;
//     }
// };
