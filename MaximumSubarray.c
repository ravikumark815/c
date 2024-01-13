/*
Author: https://github.com/ravikumark815

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104
*/

#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int* nums, int numsSize) {
    int max_so_far = nums[0], max_ending_here = 0;

    for (int i=0; i<numsSize; i++) {
        max_ending_here += nums[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    return max_so_far;
}

void main()
{
    int nums[] = {4,5,6,7,0,1,2,3};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    printf("Result: %d\n", maxSubArray(nums, numsSize));

    int nums1[] = {2,3,-2,4};
    int numsSize1 = sizeof(nums1)/sizeof(nums1[0]);
    printf("Result: %d\n", maxSubArray(nums1, numsSize1));
    
    return;
}