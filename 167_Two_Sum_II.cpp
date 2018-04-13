class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int> sum;
		if(numbers.size()<2) return sum;
		int l = 0, h = numbers.size()-1;
		while(l < h) {
			int s = numbers[l] + numbers[h];
			if(s == target) {
				sum.push_back(l+1);
				sum.push_back(h+1);
				return sum;
			} else if (s > target) h--;
			else l++;
		}
		return sum;
	}
};
