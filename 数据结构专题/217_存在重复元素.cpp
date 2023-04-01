class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		set<int> s;
		for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
		{
			s.insert(*it);
		}
		if(s.size() < nums.size())
		{
			return true;
		}
		return false;
    }
};