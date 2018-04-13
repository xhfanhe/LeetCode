class Solution {
public:
	bool isHappy(int n) {
		int slow = n, fast = n;
		do {
			slow = squareSum(slow);
			fast = squareSum(squareSum(fast));
			if(fast == 1) return true;
		} while(slow != fast);
		return false;
	}
	
	int squareSum(int x) {
		int sum = 0, tmp = 0;
		while(x) {
			tmp = x % 10;
			sum += tmp * tmp;
			x /= 10;
		}
		return sum;
	}
};
