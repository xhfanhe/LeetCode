class Solution{
public:
	int strStr(string haystack, string needle) {
		if (needle.empty()) return 0;
		if (haystack.empty()) return -1;
		int m = haystack.length(), n = needle.length();
		int i = 0, j = -1;
		int nextval[n] = {-1};
		while (i < n - 1) {
			if (j == -1 || needle[i] == needle[j] ) {
				++i;
				++j;
				if (needle[i] != needle[j]) nextval[i] = j;
				else nextval[i] = nextval[j];
			} else j = nextval[j];
		}
		
		int x = 0, y = 0;
		while (x < m && y < n) {
			if (y == -1 || haystack[x] == needle[y]) {
				++x;
				++y;
			} else y = nextval[y];
		}
		if (y >= n) return x - n;
		else return -1;
	}
};
