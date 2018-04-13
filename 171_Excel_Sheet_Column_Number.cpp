class Solution {
public:
	int titleToNumber(string s) {
		int n = s.length();
		int sum = 0;
		for(int i = 0; i < n; i++) {
			sum = sum*26 + (s[i]-'A'+1);
		}
		return sum;
	}
};
