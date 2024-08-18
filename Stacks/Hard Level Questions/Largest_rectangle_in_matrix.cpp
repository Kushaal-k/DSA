#include <iostream> 
#include <bits/stdc++.h>

using namespace std;


    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; --i) {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; ++i) {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights, int n) {
        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = 0;

        for (int i = 0; i < n; ++i) {
            int l = heights[i];

            if (next[i] == -1) {
                next[i] = n;
            }

            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }


    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        if (rows == 0) 
            return 0;
        int cols = matrix[0].size();
        
        vector<vector<int>> matrixint(rows, vector<int>(cols, 0));
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                matrixint[i][j] = matrix[i][j] - '0';
            }
        }

        int area = largestRectangleArea(matrixint[0], cols);

        for (int i = 1; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrixint[i][j] != 0)
                    matrixint[i][j] += matrixint[i - 1][j];
                else
                    matrixint[i][j] = 0;
            }

            area = max(area, largestRectangleArea(matrixint[i], cols));
        }

        return area;
    }



int main(){

    vector<vector<char>> arr{{'1','0','1','0','0'},
                         {'1','0','1','1','1'},
                         {'1','1','1','1','1'},
                         {'1','0','0','1','0'}};

    cout << maximalRectangle(arr) << endl;
    
    
    return 0;
}