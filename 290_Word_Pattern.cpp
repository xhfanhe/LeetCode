class Solution {
public:
	bool wordPattern(string pattern, string str) {
		unordered_map<string, int> w;
		unordered_map<char, int> p;
		istringstream in(str);
		int i = 0, n = pattern.size();
		for(string word; in >> word; i++) {
			if(i == n || w[word] != p[pattern[i]]) return false;
			p[pattern[i]] = w[word] = i+1;
		}
		return i == n;
	}
};
