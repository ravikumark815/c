/*

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

Example 2:
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

Example 3:
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 
Constraints:
3 <= nums.length <= 3000
-105 <= nums[i] <= 105

*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int cmp (const void *a, const void *b) {
    return *((int*)a) - *((int*)b);
}

void threeSum(int* nums, int numsSize) {
    int count = 0;

    printf("Given Array: ");
    for (int i=0; i<numsSize; i++)
        printf("%d ", nums[i]);
    printf("\nSolution:\n");
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i=0; i< numsSize-2; i++)
    {
        int l = i+1, r = numsSize-1;

        while(l<r) {
            if ((nums[i] + nums[l] + nums[r]) < 0) l++;
            else if ((nums[i] + nums[l] + nums[r]) > 0) r--;
            else {
                printf("[%d, %d, %d]\n", nums[i], nums[l], nums[r]);
                l++;
                r--;
            }
        }
    }
}

void main() {
    int nums[] = {-1,0,1,2,-1,-4};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    threeSum(nums, numsSize);

    int nums1[] = {0,1,1};
    int numsSize1 = sizeof(nums1)/sizeof(nums1[0]);
    threeSum(nums1, numsSize1);
}