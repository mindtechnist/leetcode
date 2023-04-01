//350_两个数组的交集II

//哈希   时间复杂度O(m+n)
class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> flag;
		vector<int> ret;
		for (vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++)
		{
			if (flag.find(*it) == flag.end())
			{
				flag.insert(make_pair(*it, 1));
			}
			else
			{
				flag[*it]++;
			}
		}
		for (vector<int>::iterator it = nums2.begin(); it != nums2.end(); it++)
		{
			if (flag.find(*it) != flag.end())
			{
				if (flag[*it] > 0)
				{
					ret.push_back(*it);
					flag[*it]--;
				}
			}
		}
        return ret;
	}
};