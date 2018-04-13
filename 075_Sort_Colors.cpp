class Solution {
public:
	void sortColors(vector<int>& nums) {
		int n = nums.size();
		int left = 0, middle = 0, right = n - 1;
		int tmp;
		while (middle >= left && middle <= right) {
			if (nums[middle] == 0) {
				nums[middle] = nums[left];
				nums[left] = 0;
				left++;
				middle++;
			} else if (nums[middle] == 2) {
				nums[middle] = nums[right];
				nums[right] = 2;
				right--;
			} else middle++;
		}
	}
};
