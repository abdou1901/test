int searchInsert(int* nums, int numsSize, int target) {
    if(numsSize <= 0) {printf("Invalid numsSize\n");return -1;}
    int end = numsSize - 1, start = 0, middle;
    bool found = false;
    while(start <= end){
        middle = start + (end - start) / 2;
        if(nums[middle] == target){
            return middle;
        } else if(nums[middle] > target){
            end = middle - 1;
        } else{
            start = middle + 1;
        }
    }
    
    return nums[middle] < target ? middle + 1 : middle;
}