class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int result = nums.size();
		int i = 0;
		for(auto p : nums) {
			result ^= p;
			result ^= i;
			i++;
		}
		return result;
	}
};
