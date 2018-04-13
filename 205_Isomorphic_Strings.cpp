class Solution {
public:
	bool isIsomorphic(string s, string t) {
		int m[256], n[256];
		for(int i = 0; i < 256; i++) {
			m[i] = n[i] = -1;
		}
		for(int j = 0; j < s.length(); j++) {
			if(m[s[j]] != n[t[j]]) return false;
			m[s[j]] = n[t[j]] = j;
		}
		return true;
	}
};
