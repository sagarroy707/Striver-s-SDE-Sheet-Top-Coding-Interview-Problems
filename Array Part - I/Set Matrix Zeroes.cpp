/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1
 

Follow up:

A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution
*/
//  question link - https://leetcode.com/problems/set-matrix-zeroes/ or  

#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &v)
{
    //step1 we will find the row and col size 
	    int row=v.size();
        int col=v[0].size();
        int is_zero=1;
    
    /* we will make the first row and first col as demi array.
       and  we will traverse to the whole array and if we find
       v[i][j]==0 then we will mark the 0 on demi array for that
       particular row and col */
       
        for(int i=0;i<row;i++)
        {
            if(v[i][0]==0)
                is_zero=0;

            for(int j=1;j<col;j++)
            {
                if(v[i][j]==0)
                    v[i][0]=v[0][j]=0;
            }
        }
    /* after marking 0 on demi array . we will again traverse
       to the complete two dimmensioal array from the last of array
       */
        for(int i=row-1;i>=0;i--)
        {
            for(int j=col-1;j>=1;j--)
            {
                if(v[i][0]==0 or v[0][j]==0)
                    v[i][j]=0;
            }
            if(is_zero==0)
                v[i][0]=0;
        }
        
}


