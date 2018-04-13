class Solution {
public:
	string longestPalindrome(string s) {
		string t;
		for(int k = 0; k < s.size(); k++) {
			t += "#" + s.substr(k, 1);
		}
		t.push_back('#');

		vector<int> p(t.size(), 0);
		int center = 0, resCenter = 0, boundary = 0, maxLen = 0;
		for(int i = 1; i < t.size()-1; i++) {
			p[i] = (boundary > i) ? min(p[center*2-i], boundary-i) : 0;
			while(i-p[i]-1 >= 0 && i+p[i]+1 < t.size() && t[i-p[i]-1] == t[i+p[i]+1]) p[i]++;
			if(i+p[i] > boundary) {
				boundary = i + p[i];
				center = i;
			}
			if(p[i] > maxLen) {
				resCenter = i;
				maxLen = p[i];
			}
		}
		return s.substr((resCenter-maxLen)/2, maxLen);
	}
};
