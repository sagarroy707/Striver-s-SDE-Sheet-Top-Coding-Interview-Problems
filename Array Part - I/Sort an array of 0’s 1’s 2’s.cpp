/* 
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
*/
// question link - https://leetcode.com/problems/sort-colors/
#include <iostream>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
    
    /* find the frequency of red, white and blue colour
       after finding the frequency set them in the same array*/
        int red,white,blue;
        red=white=blue=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                red++;
            else if(nums[i]==1)
                white++;
            else
                blue++;
        }
        for(int i=0;i<red;i++)
           nums[i]=0;
        
        for(int i=red;i<white+red;i++)
           nums[i]=1;
        
        for(int i=red+white;i<white+red+blue;i++)
           nums[i]=2;
        
        
    }
};

