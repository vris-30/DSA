//leetcode Problem: 118
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //n vectors to store n number of rows
        vector<vector<int>> row(numRows);
        
        for(int i=0; i<numRows; i++){
            //number of columns is always number of rows.
            row[i].resize(i+1);
            //the first and last element of every row is always 1.
            row[i][0]=row[i][i]=1;
            
            for(int j=1; j<i; j++){
                // add the previous values to generate the new value.
                row[i][j]=row[i-1][j-1]+row[i-1][j];
            }
        }
        return row;
    }
};