void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i = 0;
	int _callback(const void* num1, const void* num2)
	{
		return (*(int*)num1 - *(int*)num2);
	}
	for (i = 0; i < n; i++)
	{
		nums1[i + m] = nums2[i];
	}
	qsort(nums1, nums1Size, sizeof(nums1[0]), _callback);
}