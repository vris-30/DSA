//leetcode Problem: 73
//Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int var=1;
        //size of th rows
        int row=matrix.size();
        //size of the columns
        int col=matrix[0].size();
        
        for(int i=0; i<row; i++){
            // check if there is any zero in the the oth col of any row
            //if the zero is present then set variable as 0.
            if(matrix[i][0]==0) var=0;
            
            for(int j=1; j<col; j++)
            //if any element is zero then set it's column and row matrix corresponding values as 0.
                if(matrix[i][j]==0) 
                    matrix[i][0]=matrix[0][j]=0;        
        }
        
        //now traverse thr matrix from the last
        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=1; j--)
           // if the 0th column of any row is zero or
        //    if the oth row of any column is zero
    // then set the value of matrix[i][j]as 0
                if(matrix[i][0]==0 || matrix[0][j]==0) 
                    matrix[i][j]=0;
            // now if the var is 0, then simply set thar row value of oth col as 0.
              if(var==0)
                 matrix[i][0]=0;
        }     
    }
};