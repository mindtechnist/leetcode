bool containsDuplicate(int* nums, int numsSize){
	int i = 0;
	int _callback(const void* val1, const void* val2)
	{
		return (*(int*)val1 - *(int*)val2);
	}
	/*调用库函数qsort，自己写排序可能会超时*/
	qsort(nums, numsSize, sizeof(int), _callback);
	for(i = 1; i < numsSize; i++)
	{
		if(nums[i - 1] == nums[i])
		{
			return true;
		}
	}
	return false;
}