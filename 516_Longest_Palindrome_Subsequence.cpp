class Solution {
public:
	int longestPalindromeSubseq(string s) {
		if (s.empty()) return 0;
		int n = s.length();
		vector<vector<int>> res(n, vector<int>(n, 0));
		for (int i = 0; i < n; i++)
			res[i][i] = 1;
		for (int i = n-1; i >= 0; i--) {
			for (int j = i+1; j < n; j++) {
				if (s[i] == s[j]) res[i][j] = res[i+1][j-1] + 2;
				else res[i][j] = max(res[i+1][j], res[i][j-1]);
			}
		}
		return res[0][n-1];
	}
};
		
