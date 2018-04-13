// Forward decalration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		int left = 1, right = n, center;
		while(left < right) {
			int center = left + (right-left)/2;
			if(isBadVersion(center)) right = center;
			else left = center + 1;
		}
		return left;
	}
};
