/*

Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 

Constraints:

1 <= numRows <= 30
*/
//question link - https://leetcode.com/problems/pascals-triangle/ or
 


/* Type of questions can be asked from pascals-triangle topic
(i) if we have to return the a single given element from pascals-triangle 
    (row and col will be given)
    formula -  r-1^C col-1
(ii) if we have to return all the elements of pascals-triangle to the given row*/

#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int numRows) 
{
    // we are making a two dimensional array using vector
  vector<vector<long long int>> r(numRows);
    for(int i=0;i<numRows;i++)
    {
        //first and last elements of every row will be 1
        r[i].resize(i+1);
        r[i][0]=r[i][i]=1;
        for(int j=1;j<i;j++)
            r[i][j]=r[i-1][j-1]+r[i-1][j];
    }
    return r;
}



