#include <stdio.h>
#include <stdlib.h>

int min_in_rotated_array(int nums[], int numsSize)
{
    int min = nums[0];
    for (int i=1; i<numsSize; i++)
        if (min > nums[i])
            return nums[i];
    return min;
}

void main()
{
    int nums[] = {4,5,6,7,0,1,2,3};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int target = 2;

    printf("Result: %d\n", min_in_rotated_array(nums, numsSize));
    
    return;
}