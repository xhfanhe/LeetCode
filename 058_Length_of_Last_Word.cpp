class Solution {
public:
	int lengthOfLastWord(string s) {
		int lastlen;
		if(s.length() == 0) return 0;
		lastlen = (s[0]==' ') ? 0 : 1;
		for(int i = 1; i < s.length(); i++) {
			if(s[i] != " ") {
				if(s[i-1] == " ") lastlen = 1;
				else lastlen++;
			}
		}
	return lastlen;
	}
};
