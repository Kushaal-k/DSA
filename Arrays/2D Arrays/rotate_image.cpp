// LeetCode 48

#include <iostream> 

using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int startingRow = 0;
        int startingCol = col-1;
        

        while(startingRow<startingCol){
            
            int startCol = startingCol;
            int rowIndex = startingCol;

            for(int colIndex=startingRow;colIndex<startingCol;colIndex++){
                swap(matrix[startingRow][colIndex],matrix[colIndex][startCol]);
            }
            
            for(int colIndex=startingRow;colIndex<startingCol;colIndex++){
                swap(matrix[startingRow][colIndex],matrix[rowIndex][startCol]);
                startCol--;
            }

            for(int colIndex=startingRow;colIndex<startingCol;colIndex++){
                swap(matrix[startingRow][colIndex],matrix[rowIndex][startCol]);
                rowIndex--;
            }  

            startingRow++;
            startingCol--;

        }
    }
};