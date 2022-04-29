#include <stdio.h>

int* twoSum(int nums[], int numsSize, int target, int resarr[]){
    for (int i=0; i<numsSize; i++)
    {
        for (int j=i; j<numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                resarr[0] = i;
                resarr[1] = j;
            }
        }
    }
    return 0;
}

int main()
{
    int nums[4] = {2,7,11,15}, target = 9;
    int resarr[2] = {0,0};

    twoSum(nums, 2, 9, resarr);

    printf("[%d,%d]\n", resarr[0], resarr[1]);

    return 0;
}