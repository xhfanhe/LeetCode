class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int n = nums.capacity();
		vector<int> sum;
		for(int i = 0; i < n; i ++) {
			for(int j = i+1; j < n; j ++) {
				if(nums[i] + nums[j] == target){
					sum.push_back(i);
					sum.push_back(j);
					break;
				}
			}
		}
		return sum;
	}	
};
