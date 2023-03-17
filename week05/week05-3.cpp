#include <stdio.h>
int removeDuplicates(int* nums, int numsSize){
    int k=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i] == nums[i-1]) continue;
        else{
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main()
{
    int a[10]={0,0,1,1,1,2,2,3,3,4};
    int k=removeDuplicates(a,10);
    for(int i=0;i<k;i++){
        printf("%d ",a[i]);
    }
}
