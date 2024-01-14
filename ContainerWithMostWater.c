/*

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:
Input: height = [1,1]
Output: 1

Constraints:
n == height.length
2 <= n <= 105
0 <= height[i] <= 104

*/

#include<stdio.h>

int maxArea(int* height, int heightSize) {
    int l=0, r=heightSize-1;
    int res = 0;

    while(l<r) {
        int cur_ar = (((height[l] < height[r]) ? height[l] : height[r])*(r-l));
        res = (res > cur_ar)? res : cur_ar;
        (height[l] > height[r]) ? (r--) : (l++);
    }
    return res;
}

void main()
{
    int nums[] = {1,8,6,2,5,4,8,3,7};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    printf("Result: %d\n", maxArea(nums, numsSize));

    int nums1[] = {1,1};
    int numsSize1 = sizeof(nums1)/sizeof(nums1[0]);
    printf("Result: %d\n", maxArea(nums1, numsSize1));
    return;
}
