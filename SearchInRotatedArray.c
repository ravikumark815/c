#include <stdio.h>
#include <stdlib.h>

int search_in_rotated_array(int nums[], int numsSize, int target)
{
    for (int i=0; i<numsSize; i++)
        if (nums[i] == target)
            return i;
    return -1;
}

void main()
{
    int nums[] = {4,5,6,7,0,1,2,3};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int target = 2;

    printf("Result: %d\n", search_in_rotated_array(nums, numsSize, target));
    
    return;
}