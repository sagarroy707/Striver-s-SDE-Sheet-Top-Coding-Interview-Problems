/*
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are considered permutations of arr: [1,2,3], [1,3,2], [3,1,2], [2,3,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 100
*/
//question link - https://leetcode.com/problems/next-permutation/  or
  
/* brute force approach is to find all the subsets of a array
 and then return next subset to the given subset 
*/
#include <iostream>
using namespace std;
vector<int> nextPermutation(vector<int> &nums, int m)
{
    // search the element which is nums[k]<nums[k+1] in the back of the array
    int n = nums.size(), k, l;
        for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    // if we didn't find then simply reverse the array begining to end.
    /* if we find a element we were searching for then find the number which is
       greater then the number we found above and we have to search in the range 
       of k+1(the index of above number) and nums.size() */
        if (k < 0) {
            reverse(nums.begin(), nums.end());
        } else {
            for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
            /* after finding the number greater then 1st number then we have to 
            swap those two numbers .
            and reverse the array from 1st found number to end */
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end());
        }
}


