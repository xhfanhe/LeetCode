class Solution {
public:
	int climbStairs(int n) {
		if(n <= 0) return 0;
		if(n == 1) return 1;
		if(n == 2) return 2;
		int first = 1, second = 2, sum = 0;
		for(int i = 2; i < n; i++) {
			sum = first + second;
			first = second;
			second = sum;
		}
		return sum;
	}
};
