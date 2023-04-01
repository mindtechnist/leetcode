class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int i = 0;
        do
        {
            unordered_map<int, int>::iterator it = m.find(target - nums[i]);
            if(it != m.end())
            {
                return {it->second, i};
            }
            else
            {
                m.insert(pair<int, int>(nums[i], i));
				i++;
            }
        }while(i < nums.size());
        return {};
    }
};