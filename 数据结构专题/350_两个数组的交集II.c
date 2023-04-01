
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int _callback(const void* val1, const void* val2)
{
	return *(int*)val1 - *(int*)val2;
}
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	int index1 = 0, index2 = 0;
	qsort(nums1, nums1Size, sizeof(nums1[0]), _callback);
	qsort(nums2, nums2Size, sizeof(nums2[0]), _callback);
	*returnSize = 0;
	int* ret = (int*)malloc(sizeof(int) * fmin(nums1Size, nums2Size));
	while (index1 < nums1Size && index2 < nums2Size)
	{
		if (nums1[index1] < nums2[index2])
		{
			index1++; /*如果nums1中的数据小，那么nums1的游标下移*/
		}
		else if (nums1[index1] > nums2[index2])
		{
			index2++; /*如果nums2中的数据小，那么nums2的游标下移*/
		}
		else
		{
			*(ret + (*returnSize)) = nums1[index1]; /*两个数相等则加入容器*/
			index1++;
			index2++;
			(*returnSize)++;
		}
	}
	return ret;
}