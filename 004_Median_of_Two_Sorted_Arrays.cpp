class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int m = nums1.size(), n = nums2.size();
		if(m > n) return findMedianSortedArrays(nums2, nums1);
		int i, j, imin = 0, imax = m, val = (m+n+1)/2;
		while(imin <= imax) {
			i = (imin + imax) >> 1;
			j = val - i;
			if(i > 0 && nums1[i-1] > nums2[j]) imax = i-1;
			else if(i < m && nums2[j-1] > nums1[i]) imin = i+1;
			else break;
		}
		int p1, p2;
		if(!i) p1 = nums2[j-1];
		else if(!j) p1 = nums1[i-1];
		else p1 = max(nums1[i-1], nums2[j-1]);
		if(i == m) p2 = nums2[j];
		else if(j == n) p2 = nums1[i];
		else p2 = min(nums1[i], nums2[j]);
		return ((m+n) & 1) ? p1 : ((p1+p2)/2.0);
	}
};
